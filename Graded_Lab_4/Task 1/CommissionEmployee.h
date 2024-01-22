// ******************************************************************
// Programmer: Abdullah Nazir
// Date Created: January 22, 2024
//
// class CommissionEmployee
// This is a derived class from Employee (abstract base class) that
// implements the members to calculate and display earnings of the 
// commission employee.
// *******************************************************************

#ifndef H_CommissionEmployee
#define H_CommissionEmployee

#include <string>
#include "Employee.h"

using namespace std;

class CommissionEmployee : public Employee
{
    public:
        CommissionEmployee(const string &, const string &, const string &, double, double);
        virtual double calculateEarnings()const;
        void displayInfo()const;

        double commissionRate;
        double sales;
};

#endif  // H_CommissionEmployee