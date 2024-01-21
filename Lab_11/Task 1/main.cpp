#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Truck.h"

using namespace std;

int main()
{
    Vehicle v1, v2("Myvehicle", 1999);

    Car c1, c2("Mycar", 1888, 4);

    Motorcycle m1, m2("Mymotorcycle", 1777, 3);

    Truck t1, t2("Mytruck", 1666, 255.56);

    v1.display();
    v2.display();

    c1.display();
    c2.display();

    m1.display();
    m2.display();

    t1.display();
    t2.display();
}

// Task\ 1/main.cpp Task\ 1/VehicleImp.cpp Task\ 1/CarImp.cpp Task\ 1/MotorcycleImp.cpp Task\ 1/TruckImp.cpp 