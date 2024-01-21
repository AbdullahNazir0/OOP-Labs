#include "Engine.h"

Engine::Engine(int hp, const std::string &fuel) : horsePower(hp), fuelType(fuel){}

void Engine::displayEngine(){
	std::cout << "Engine Horse Power: " << horsePower << std::endl;
	std::cout << "Engine Fuel Type: " << fuelType << std::endl;
}
