// ******************************************************************
// Programmer: Abdullah Nazir
// Date Created: January 22, 2024
//
// class SalariedEmployee
// This is a derived class from Employee (abstract base class) that
// implements the members to calculate and display earnings of the 
// salaried employee.
// *******************************************************************

#ifndef H_SalariedEmployee
#define H_SalariedEmployee

#include <string>
#include "Employee.h"

using namespace std;

class SalariedEmployee : public Employee
{
    public:
        SalariedEmployee(const string &, const string &, const string &, double);
        virtual double calculateEarnings()const;
        void displayInfo()const;

    private:
        double weeklySalary;
};

#endif  // H_SalariedEmployee