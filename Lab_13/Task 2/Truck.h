#ifndef H_Truck
#define H_Truck

#include <string>
#include "Vehicle.h"

class Truck : public Vehicle
{
    public:
        Truck();
        Truck(const string &, const string &, double);
        void displayInfo()const override;
    private:
        double cargoCapacity;
};

#endif // H_Truck