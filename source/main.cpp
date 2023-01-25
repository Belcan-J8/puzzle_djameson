#include "Car.h"
#include "Logger.h"

int main(int argc, char* argv[])
{
	Logger logger;

	logger.Log("Starting application");

	// TODO (djameson):  In my eyes it would probably make sense to share the logger
	// object between these objects (car/gauge/main) either through passing it in or
	// some kind resource locator/singleton/etc. However, i'm not sure of the full
	// intent here or if that falls under "core logic". So I'll leave it for now.

	Car car;
	car.TurnLeft();
	car.TurnRight();
	car.Accelerate();

	logger.Log("Exiting application");

	return 0;
}
