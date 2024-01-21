#include "Animal.h"

#include <iostream>
#include <string>

using namespace std;

Animal::Animal() : name("Unknown"), type("Animal"){}

Animal::Animal(const string &n, const string &t) : name(n), type(t){}

void Animal::displayInfo()const
{
    cout << "Animal Name: " << name << endl;
    cout << "Animal Type: " << type << endl;
}