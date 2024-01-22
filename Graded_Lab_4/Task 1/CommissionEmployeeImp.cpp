// ******************************************************************
// Programmer: Abdullah Nazir
// Date Created: January 22, 2024
//
// Implementation file CommissionEmployeeImp.cpp
// This file defines the functions declared in the derived class
// CommissionEmployee.
// *******************************************************************

#include "CommissionEmployee.h"

#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

CommissionEmployee::CommissionEmployee(const string &first, const string &last, const string &security, double commission, double sale) : Employee(first, last, security), commissionRate(commission), sales(sale) {}

double CommissionEmployee::calculateEarnings()const
{
    return(commissionRate * sales);     // Assuming that the weekly earning is calculated by multiplying commission rate to sales.
}

void CommissionEmployee::displayInfo()const
{
    Employee::displayInfo();
    cout << "Commission Employee Commission Rate: " << commissionRate << endl;
    cout << "Commission Employee Sales: " << sales << endl;
}