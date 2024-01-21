#ifndef H_Fish
#define H_Fish

#include <string>
#include "Animal.h"

using namespace std;

class Fish : public Animal
{
    public:
        Fish();
        Fish(const string &, const string &, const string &);
        void displayInfo()const;
    private:
        string scaleColor;
};

#endif // H_Fish