#include "Employee.h"

Employee::Employee(int id, const string &name, double salary) : employeeId(id), employeeName(name), employeeSalary(salary){}
void Employee::displayEmployee() const {
    std::cout << "Employee ID: " << employeeId << std::endl;
    std::cout << "Employee Name: " << employeeName << std::endl;
    std::cout << "Employee Salary: " << employeeSalary << std::endl << std::endl;
}