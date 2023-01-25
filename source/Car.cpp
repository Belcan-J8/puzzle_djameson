#include "Car.h"
#include "log_utils.h"

Car::Car()
	: logger(std::make_unique<Logger>())
{
}

void Car::TurnLeft()
{
	logger->Log(decorate(Level::Info, "Turning left"));
	fuelGauge.DecrementFuelLevel();
}

void Car::TurnRight()
{
	logger->Log(decorate(Level::Info, "Turning right"));
	fuelGauge.DecrementFuelLevel();
}

void Car::Accelerate()
{
	logger->Log(decorate(Level::Info, "Moving ahead"));
	fuelGauge.DecrementFuelLevel();
	fuelGauge.DecrementFuelLevel();
}
