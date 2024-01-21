#ifndef H_Zoo
#define H_Zoo

#include <vector>
#include "Animal.h"

class Zoo
{
    public:
        void addAnimal(Animal *newAnimal);
        void displayZooInfo()const;
    private:
        vector<Animal *>animals;
};

#endif // H_Zoo