#include "RentalAgency.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Truck.h"

int main()
{

    RentalAgency agency;

    Car *car1 = new Car();
    Car *car2 = new Car("Toyota", "Corolla", 4);

    Motorcycle *motorcycle1 = new Motorcycle();
    Motorcycle *motorcycle2 = new Motorcycle("Harley", "Davidson", 2);

    Truck *truck1 = new Truck();
    Truck *truck2 = new Truck("Mytruck", "Mymodel", 500.0);

    agency.addVehicle(car1);
    agency.addVehicle(car2);

    agency.addVehicle(motorcycle1);
    agency.addVehicle(motorcycle2);

    agency.addVehicle(truck1);
    agency.addVehicle(truck2);

    agency.displayRentalInfo();

    delete car1, car2, motorcycle1, motorcycle2, truck1, truck2;

    return 0;
}