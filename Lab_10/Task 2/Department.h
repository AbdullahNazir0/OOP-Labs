#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <iostream>
#include "Employee.h"
using std::string;

class Department {
private:
    string departmentName;
    Employee manager;
public:
    Department(const string &depName = "", int empId = 000, const string &empName = "", double empSalary = 50000);
    void displayDepartment()const;
};

#endif