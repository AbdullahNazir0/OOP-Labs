#ifndef H_Bird
#define H_Bird

#include <string>
#include "Animal.h"

using namespace std;

class Bird : public Animal
{
    public:
        Bird();
        Bird(const string &, const string &, double);
        void displayInfo()const override;
    private:
        double wingSpan;
};

#endif // H_Bird