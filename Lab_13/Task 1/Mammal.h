#ifndef H_Mammal
#define H_Mammal

#include <string>
#include "Animal.h"

using namespace std;

class Mammal : public Animal
{
    public:
        Mammal();
        Mammal(const string &, const string &, const string &);
        void displayInfo()const override;
    private:
        string furColor;
};

#endif // H_Mammal