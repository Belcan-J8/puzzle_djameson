#pragma once

#include "FuelGauge.h"
#include "Logger.h"

#include <memory>

class Car
{
public:
	Car();
	void TurnLeft();
	void TurnRight();
	void Accelerate();

private:
	FuelGauge fuelGauge;
	std::unique_ptr<ILogger> logger;
};
