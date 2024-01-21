#ifndef H_Motorcycle
#define H_Motorcycle

#include <string>
#include "Vehicle.h"

using namespace std;

class Motorcycle : public Vehicle
{
    public:
        Motorcycle();
        Motorcycle(const string &, const string &, int);
        void displayInfo()const override;
    private:
        int numWheels;
};

#endif // H_Motorcycle