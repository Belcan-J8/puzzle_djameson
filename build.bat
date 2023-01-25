@echo off

@rem ===========================================================================
@rem Using MSBuild for now just to get things up and running.
@rem In the future CMake/Premake/YourFavoriteBuildSystem might be prefered.
@rem Especially if we are targeting multiple/different platforms.
@rem ===========================================================================

@rem Locate `vswhere`.
@rem In the future it might be wise to:
@rem   1. Check ready exists (is `vswhere` a valid command already).
@rem   2. Check the program files location.
@rem   3. If still not found download from: https://github.com/Microsoft/vswhere/releases/latest/download/vswhere.exe
@rem However, this should be fine assuming a moderately recent VS version (>=2017). So I'll just ignore it for now.
set vswhere="%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe"

@rem Attempt to setup Visual Studio dev env.
@rem See: https://github.com/microsoft/vswhere/wiki/Start-Developer-Command-Prompt
if "%VSCMD_VER%"=="" (
	for /f "usebackq delims=" %%i in (`%vswhere% -latest -property installationPath`) do (
		if exist "%%i\Common7\Tools\vsdevcmd.bat" (
			call "%%i\Common7\Tools\vsdevcmd.bat" /arch=x64 /no_logo
		) else (
			echo "Unable to find Visual Studio dev environment (vsdevcmd). Aborting."
			exit /b
		)
	)
)

@rem Download dependencies.
@rem Again, lets just get things up and running.
@rem In the future it would probably be good to look into vcpkg/conan/submodules/YourFavoritePackageManager.
if not exist "deps/termcolor" (
	git clone --depth 1 --branch v2.1.0 https://github.com/ikalnytskyi/termcolor.git deps/termcolor
)

@rem Do the build.
msbuild Project.sln /nologo /m /p:Configuration=Debug /p:Platform=x64
