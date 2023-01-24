#include "Car.h"
#include "Logger.h"

int main(int argc, char* argv[])
{
	Logger logger;

	logger.Log("Starting application");

	Car car;
	car.TurnLeft();
	car.TurnRight();
	car.Accelerate();

	logger.Log("Exiting application");
}
