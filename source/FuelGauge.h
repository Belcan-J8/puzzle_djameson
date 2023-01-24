#pragma once

#include "Logger.h"

class FuelGauge
{
public:
	FuelGauge();
	void DecrementFuelLevel();
private:
	int fuelLevel;
	ILogger* logger;
};
