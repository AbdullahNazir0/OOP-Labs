#include "Department.h"

Department::Department(const string &depName, int empId, const string &empName, double empSalary) : departmentName(depName), manager(empId, empName, empSalary){}
void Department::displayDepartment() const {
    std::cout << "Department Name: " << departmentName << std::endl;
    manager.displayEmployee();
}