#pragma once

#include <string>

struct ILogger
{
	virtual void Log(std::string string) = 0;
};

class Logger : public ILogger
{
public:
	void Log(std::string string);
};

class BlueLogger : public ILogger
{
public:
	void Log(std::string string);
};

class RedLogger : public ILogger
{
public:
	void Log(std::string string);
};

