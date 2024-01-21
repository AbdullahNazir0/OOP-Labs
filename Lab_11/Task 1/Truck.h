#ifndef H_Truck
#define H_Truck

#include <string>
#include "Vehicle.h"

using namespace std;

class Truck : protected Vehicle
{
    public:
        Truck();
        Truck(const string &, int, double);
        void display()const;
    private:
        double cargoCapacity;
};

#endif // H_Truck