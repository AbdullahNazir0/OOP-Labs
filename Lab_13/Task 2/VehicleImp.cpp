#include "Vehicle.h"

#include <iostream>
#include <string>

using namespace std;

Vehicle::Vehicle()
{
    brand = "Unknown";
    model = "Not Specified";
}

Vehicle::Vehicle(const string &br, const string &mo)
{
    brand = br;
    model = mo;
}

void Vehicle::displayInfo()const
{
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
}