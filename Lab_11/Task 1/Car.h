#ifndef H_Car
#define H_Car

#include <string>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle
{
    public:
        Car();
        Car(const string &, int, int);
        void display()const;
    private:
        int numDoors;
};

#endif // H_Car