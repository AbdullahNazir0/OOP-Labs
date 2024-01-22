// ******************************************************************
// Programmer: Abdullah Nazir
// Date Created: January 22, 2024
//
// class BasePlusCommissionEmployee
// This is a derived class from Employee (abstract base class) that
// implements the members to calculate and display earnings of the 
// base plus commission employee.
// *******************************************************************

#ifndef H_BasePlusCommissionEmployee
#define H_BasePlusCommissionEmployee

#include <string>
#include "CommissionEmployee.h"

using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee
{
    public:
        BasePlusCommissionEmployee(const string &, const string &, const string &, double, double, double);
        virtual double calculateEarnings()const;
        void displayInfo()const;

    private:
        double baseSalary;
};

#endif  // H_BasePlusCommissionEmployee