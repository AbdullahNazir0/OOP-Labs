#ifndef H_Motorcycle
#define H_Motorcycle

#include <string>
#include "Vehicle.h"

using namespace std;

class Motorcycle : private Vehicle
{
    public:
        Motorcycle();
        Motorcycle(const string &, int, int);
        void display()const;
    private:
        int numWheels;
};

#endif // H_Motorcycle