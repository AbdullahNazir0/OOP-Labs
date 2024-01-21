#include "Bird.h"

#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

Bird::Bird() : Animal(), wingSpan(0.0)
{}

Bird::Bird(const string &n, const string &t, double w) : Animal(n, t), wingSpan(w)
{}

void Bird::displayInfo()const
{
    Animal::displayInfo();
    cout << "Bird Wing Span: " << wingSpan << endl;
}