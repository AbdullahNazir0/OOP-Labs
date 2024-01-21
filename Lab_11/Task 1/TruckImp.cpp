#include "Truck.h"

#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

Truck::Truck() : Vehicle(), cargoCapacity(0.0){}

Truck::Truck(const string &mo, int y, double ccap) : Vehicle(mo, y), cargoCapacity(ccap){}

void Truck::display()const
{
    Vehicle::display();
    cout << "Truck cargo capacity: " << cargoCapacity << endl;
}