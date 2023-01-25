#pragma once

#include "Logger.h"

#include <memory>

class FuelGauge
{
public:
	FuelGauge();
	void DecrementFuelLevel();

private:
	int fuelLevel;
	std::unique_ptr<ILogger> logger;
};
