#include "FuelGauge.h"
#include "log_utils.h"

FuelGauge::FuelGauge()
	: fuelLevel(5)
	, logger(std::make_unique<Logger>())
{
}

void FuelGauge::DecrementFuelLevel()
{
	--fuelLevel;
	if (fuelLevel < 2)
	{
		logger->Log(decorate(Level::Warn, "Low fuel!"));
	}
}
