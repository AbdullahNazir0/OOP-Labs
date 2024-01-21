#include "Motorcycle.h"

#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

Motorcycle::Motorcycle() : Vehicle(), numWheels(2){}

Motorcycle::Motorcycle(const string &br, const string &mo, int nwheel) : Vehicle(br, mo), numWheels(nwheel){}

void Motorcycle::displayInfo()const
{
    Vehicle::displayInfo();
    cout << "Motorcycle number of wheels: " << numWheels << endl;
}