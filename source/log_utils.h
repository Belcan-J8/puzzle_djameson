#pragma once

#include <string>
#include <string_view>

enum class Level {
	Info,
	Warn,
};

/**
 * Decorates a message with the appropriate ANSI formatting for that log level.
 */
std::string decorate(Level level, std::string_view message);