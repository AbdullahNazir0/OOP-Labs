#include "Car.h"

#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

Car::Car() : Vehicle(), numDoors(4){}

Car::Car(const string &mo, int y, int ndoor) : Vehicle(mo, y), numDoors(ndoor){}

void Car::display()const
{
    Vehicle::display();
    cout << "Car number of doors: " << numDoors << endl;
}