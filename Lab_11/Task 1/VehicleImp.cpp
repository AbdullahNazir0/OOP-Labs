#include "Vehicle.h"

#include <iostream>
#include <string>

using namespace std;

Vehicle::Vehicle() : model("Undefined"), year(0){}

Vehicle::Vehicle(const string &mo, int y) : model(mo), year(y){}

void Vehicle::display()const
{
    cout << "Vehicle model: " << model << endl;
    cout << "Vehicle manufacturing year: " << year << endl;
}