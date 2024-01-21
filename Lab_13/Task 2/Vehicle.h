#ifndef H_Vehicle
#define H_Vehicle

#include <string>

using namespace std;

class Vehicle
{
    public:
        Vehicle();
        Vehicle(const string &, const string &);
        virtual void displayInfo()const;
    protected:
        string brand;
        string model;
};

#endif