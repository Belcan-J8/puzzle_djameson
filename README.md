# Puzzles
Puzzles for Potentials

## Summary
Hello! Welcome to our little puzzle! In this folder we have a few C++ source files illustrating a toy example, but modeling real-world coding activities. We have a Car class which makes use of a FuelGauge class and both classes make use of a Logger class. There is an entry point in main.cpp that commands the Car. In `main()` we log the start and end of application execution. We instantiate a Car and command it to turn left, then right, then accelerate. For each of these actions the Car class decrements fuel from the FuelGauge and logs its action. When the fuel runs low, the fuel gauge logs that as well.

Our "client" has asked to make these status messages more visible on the console. We have identified an open-source library, [termcolor](https://github.com/ikalnytskyi/termcolor), that allows for colorful console output cross-platform so we can save time implementing a solution on both Windows and Linux (our customers use both operating systems).

Remember, we are not just assessing your coding skills, but also your ability to manage requirements and think critically.

We value your time and want to provide some guidance: we anticipate the entirety of the exercise will take more than an hour, but don't want you to spend more than three hours.

Please also feel free to reach out if you have any questions -- in fact, we expect you to!

## Coding Guidelines
* Feel free to use any operating system, compiler, and build mechanism you prefer
* You may *not* modify the ILogger interface (our other projects depend on it!)
* Make any improvements or modernizations to existing code you see fit, according to industry best practices. Assume support for C++17. We know there is room for improvement and are eager to incorporate your contributions.
* Do not squash or otherwise eliminate any of your intermediate commits before pushing or opening a pull request

## Part 1
Given the source code in this folder:
1. Create a build script (e.g. `build.sh`/`build.bat`) that compiles the code
1. Clone and incorporate the termcolor library in any way you see fit
1. Using termcolor in conjunction with the Logger class, make the messages print in color
    1. The "Low fuel!" message should print in **red**
    1. The status messages from the car should print in **blue**
1. You may modify any of the class implementations, but the core logic and message strings should remain the same.
1. Commit your changes to a new branch and open a pull request here on Github
1. Attach a screenshot of the output to the pull request

## Part 2
After you have completed part 1, a team member will push changes to a branch called *SupportColorfulLogging*. It seems while you were making these changes for our "customer", your team member made similar changes to solve the problem. We need to get on the same page!
1. Create a new branch from the tip of your existing branch
1. Merge the *SupportColorfulLogging* branch into your new branch
1. Preserve the new Logger classes and usage in Car.cpp and FuelGauge.cpp (but feel free to suggest improvements)
1. Ensure there are no regressions
1. Commit your changes and open a new pull request
1. Attach a screenshot of the output to the pull request
1. Await instructions for Part 3

## Part 3
TBD
