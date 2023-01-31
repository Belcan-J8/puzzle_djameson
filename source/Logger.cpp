#include "Logger.h"

#include <termcolor.hpp>
#include <iostream>

void Logger::Log(std::string string)
{
	std::cout << string << std::endl;
}

void BlueLogger::Log(std::string string)
{
	std::cout << termcolor::blue << string << termcolor::reset << std::endl;
}

void RedLogger::Log(std::string string)
{
	std::cout << termcolor::red << string << termcolor::reset << std::endl;
}
