#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "Engine.h"

class Car {
	private:
		std::string model;
		Engine engine;
	public:
		Car(const std::string &mod = "", int hp = 0, const std::string &fuel = "");
		void displayCar();
};

#endif
