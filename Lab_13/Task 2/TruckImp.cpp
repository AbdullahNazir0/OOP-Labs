#include "Truck.h"

#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

Truck::Truck() : Vehicle(), cargoCapacity(0.0){}

Truck::Truck(const string &br, const string &mo, double cap) : Vehicle(br, mo), cargoCapacity(cap){}

void Truck::displayInfo()const
{
    Vehicle::displayInfo();
    cout << "Truck Cargo Capacity: " << cargoCapacity << endl;
}