#include "Department.h"

Department::Department(const string &depName) : departmentName(depName){}

void Department::displayDepartment()const{
    std::cout << "Department Name: " << departmentName << std::endl << std::endl;
}