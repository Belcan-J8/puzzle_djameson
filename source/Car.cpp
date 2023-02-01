#include "Car.h"

Car::Car()
	: logger(std::make_unique<BlueLogger>())
{
}

void Car::TurnLeft()
{
	logger->Log("Turning left");
	fuelGauge.DecrementFuelLevel();
}

void Car::TurnRight()
{
	logger->Log("Turning right");
	fuelGauge.DecrementFuelLevel();
}

void Car::Accelerate()
{
	logger->Log("Moving ahead");
	fuelGauge.DecrementFuelLevel();
	fuelGauge.DecrementFuelLevel();
}
