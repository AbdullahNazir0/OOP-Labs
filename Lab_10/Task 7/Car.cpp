#include "Car.h"

Car::Car(const std::string &mod, int hp, const std::string &fuel) : model(mod), engine(hp, fuel){}

void Car::displayCar(){
	std::cout << "Car Model: " << model << std::endl;
	engine.displayEngine();
}
