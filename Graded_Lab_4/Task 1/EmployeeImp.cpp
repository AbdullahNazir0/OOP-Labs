// ******************************************************************
// Programmer: Abdullah Nazir
// Date Created: January 22, 2024
//
// Implementation file EmployeeImp.cpp
// This file defines the functions declared in the base class
// Employee.
// *******************************************************************

#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

Employee::Employee(const string &first, const string &last, const string &security) : firstName(first), lastName(last), socialSecurityNumber(security) {}

void Employee::displayInfo()const
{
    cout << "Employee First Name: " << firstName << endl;
    cout << "Employee Last Name: " << lastName << endl;
    cout << "Employee Social Security Number: " << socialSecurityNumber << endl;
}