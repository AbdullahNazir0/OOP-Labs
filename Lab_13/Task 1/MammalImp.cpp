#include "Mammal.h"

#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

Mammal::Mammal() : Animal(), furColor("Not Specified")
{}

Mammal::Mammal(const string &n, const string &t, const string &f) : Animal(n, t), furColor(f)
{}

void Mammal::displayInfo()const
{
    Animal::displayInfo();
    cout << "Mammal Fur Color: " << furColor << endl;
}