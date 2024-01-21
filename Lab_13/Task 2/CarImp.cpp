#include "Car.h"

#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

Car::Car() : Vehicle(), numDoors(4){}

Car::Car(const string &br, const string &mo, int ndoor) : Vehicle(br, mo), numDoors(ndoor){}

void Car::displayInfo()const 
{
    Vehicle::displayInfo();
    cout << "Car number of doors: " << numDoors << endl;
}