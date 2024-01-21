#include "Zoo.h"

#include <iostream>
#include <vector>
#include "Animal.h"

void Zoo::addAnimal(Animal *newAnimal)
{
    animals.push_back(newAnimal);
}

void Zoo::displayZooInfo()const
{
    cout << "Total Animals in zoo: " << animals.size() << endl;
    int i = 1;
    for( auto animal : animals )
    {
        cout << i << ". " << endl;
        animal->displayInfo();
        cout << "----------------------------------------" << endl;
        i++;
    }
}