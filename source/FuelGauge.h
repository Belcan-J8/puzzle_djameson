#pragma once

#include <memory>

#include "Logger.h"

class FuelGauge
{
public:
	FuelGauge();
	void DecrementFuelLevel();

private:
	int fuelLevel;
	std::unique_ptr<ILogger> logger;
};
