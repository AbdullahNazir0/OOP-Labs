#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <iostream>
using std::string;

class Department {
private:
    string departmentName;
public:
    Department(const string &depName = "");
    void displayDepartment()const;
};

#endif