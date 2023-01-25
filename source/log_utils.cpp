#define TERMCOLOR_USE_ANSI_ESCAPE_SEQUENCES

#include "log_utils.h"

#include <termcolor/termcolor.hpp>

#include <sstream>


std::string decorate(Level level, std::string_view message) {
	std::stringstream temp;
	temp << termcolor::colorize;

	switch (level) {
		case Level::Info: { temp << termcolor::blue; break; }
		case Level::Warn: { temp << termcolor::red; break; }
	}

	temp << message << termcolor::reset;
	return temp.str();
}