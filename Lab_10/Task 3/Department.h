#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <iostream>
#include <vector>
#include "Employee.h"
using std::string, std::vector;

class Department {
private:
    string departmentName;
    vector <Employee*> departmentEmployees;
public:
    Department(const string &depName = "", const vector <Employee*> &emp = {});
    void displayDepartment()const;
};

#endif