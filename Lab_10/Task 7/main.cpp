#include <iostream>
#include "Car.h"

int main(){
	Car c1, c2("Honda Civic Eagle Eye", 256, "Petrol");

	c1.displayCar();
	std::cout << "--------------------------------------------------" << std::endl;
	c2.displayCar();

	std::cout << "This is composition." << std::endl;

	return 0;
}
