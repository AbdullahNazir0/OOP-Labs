#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using std::string;

class Employee {
private:
    int employeeId;
    string employeeName;
    double employeeSalary;
public:
    Employee(int id = 000, const string &name = "", double salary = 50000);
    void displayEmployee()const;

};

#endif