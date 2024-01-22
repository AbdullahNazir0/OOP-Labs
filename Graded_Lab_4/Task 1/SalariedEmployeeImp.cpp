// ******************************************************************
// Programmer: Abdullah Nazir
// Date Created: January 22, 2024
//
// Implementation file SalariedEmployeeImp.cpp
// This file defines the functions declared in the derived class
// SalariedEmployee.
// *******************************************************************

#include "SalariedEmployee.h"

#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

SalariedEmployee::SalariedEmployee(const string &first, const string &last, const string &security, double weekly) : Employee(first, last, security), weeklySalary(weekly) {}

double SalariedEmployee::calculateEarnings()const
{
    return(weeklySalary * 4);   // Assuming that the total earning that is to be calculated is monthly, so weekly salary multiplied by 4.
}

void SalariedEmployee::displayInfo()const
{
    Employee::displayInfo();
    cout << "Salaried Employee Weekly Salary: " << weeklySalary << endl;
}