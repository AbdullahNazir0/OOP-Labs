#include "RentalAgency.h"

#include <iostream>
#include <vector>
#include "Vehicle.h"

using namespace std;

void RentalAgency::addVehicle(Vehicle *newVehicle)
{
    vehicles.push_back(newVehicle);
}

void RentalAgency::displayRentalInfo()const
{
    int i = 1;
    for( auto vehicle : vehicles )
    {
        cout << i << ". " << endl;
        vehicle->displayInfo();
    }
}

// g++ Task\ 2/main.cpp Task\ 2/VehicleImp.cpp Task\ 2/CarImp.cpp Task\ 2/MotorcycleImp.cpp Task\ 2/TruckImp.cpp Task\ 2/RentalAgencyImp.cpp 