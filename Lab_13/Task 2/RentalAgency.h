#ifndef H_RentalAgency
#define H_RentalAgency

#include <vector>
#include "Vehicle.h"

class RentalAgency
{
    public:
        void addVehicle(Vehicle *newVehicle);
        void displayRentalInfo()const;
    private:
        vector<Vehicle*>vehicles;
};

#endif // H_RentalAgency