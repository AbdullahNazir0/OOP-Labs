#ifndef H_Vehicle
#define H_Vehicle

#include <string>

using namespace std;

class Vehicle
{
    public:
        Vehicle();
        Vehicle(const string &, int);
        void display()const;
    protected:
        string model;
        int year;
};

#endif // H_Vehicle