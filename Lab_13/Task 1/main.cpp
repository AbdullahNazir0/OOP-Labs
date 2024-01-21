#include "Zoo.h"
#include "Mammal.h"
#include "Bird.h"
#include "Fish.h"

using namespace std;

int main()
{

    Fish *fish = new Fish("MyFish", "Fish", "blue");
    Bird *bird = new Bird("MyBird", "Bird", 2.5);
    Mammal *mammal = new Mammal("MyMammal", "Mammal", "Brown");

    Zoo myZoo;
    myZoo.addAnimal(mammal);
    myZoo.addAnimal(bird);
    myZoo.addAnimal(fish);

    myZoo.displayZooInfo();

    delete fish, bird, mammal;

    return 0;
}

// g++ .\main.cpp .\AnimalImp.cpp .\BirdImp.cpp .\FishImp.cpp .\MammalImp.cpp .\ZooImp.cpp