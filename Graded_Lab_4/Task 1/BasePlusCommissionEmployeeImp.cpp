// ******************************************************************
// Programmer: Abdullah Nazir
// Date Created: January 22, 2024
//
// Implementation file BasePlusCommissionEmployeeImp.cpp
// This file defines the functions declared in the derived class
// BasePlusCommissionEmployee.
// *******************************************************************

#include "BasePlusCommissionEmployee.h"

#include <iostream>
#include <string>
#include "CommissionEmployee.h"

using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &first, const string &last, const string &security, double commission, double sale, double base) : CommissionEmployee(first, last, security, commission, sales), baseSalary(base) {}

double BasePlusCommissionEmployee::calculateEarnings()const
{
    double newBaseSalary = baseSalary + (10 / 100 * baseSalary);    // Boosting the base salary by 10%.
    return((commissionRate * sales) + newBaseSalary);  // Assuming that the total earnings is calculated by multiplying commission to sales and adding 10%n boosted base salary.
}

void BasePlusCommissionEmployee::displayInfo()const
{
    CommissionEmployee::displayInfo();
    cout << "Base plus Commission Employee base salary: " << baseSalary << endl;
}