#include "Fish.h"

#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

Fish::Fish() : Animal(), scaleColor("Not Specified")
{}

Fish::Fish(const string &n, const string &t, const string &s) : Animal(n, t), scaleColor(s)
{}

void Fish::displayInfo()const
{
    Animal::displayInfo();
    cout << "Fish Scale Color: " << scaleColor << endl;
}