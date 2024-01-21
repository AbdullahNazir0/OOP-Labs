#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>

class Engine {
	private:
		int horsePower;
		std::string fuelType;
	public:
		Engine(int hp = 0, const std::string &fuel = "");
		void displayEngine();
};

#endif
