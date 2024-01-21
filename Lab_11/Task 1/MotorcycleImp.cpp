#include "Motorcycle.h"

#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

Motorcycle::Motorcycle() : Vehicle(), numWheels(2) {}

Motorcycle::Motorcycle(const string &mo, int y, int nwheel) : Vehicle(mo, y), numWheels(nwheel) {}

void Motorcycle::display()const
{
    Vehicle::display();
    cout << "Motorcycle number of wheels: " << numWheels << endl;
}