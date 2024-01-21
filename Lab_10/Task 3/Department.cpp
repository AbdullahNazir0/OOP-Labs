#include "Department.h"

Department::Department(const string &depName, const vector <Employee*> &emp) : departmentName(depName), departmentEmployees(emp){}
void Department::displayDepartment() const {
    std::cout << "Department Name: " << departmentName << std::endl << std::endl;
    std::cout << "Employees: " << std::endl;
    for( const auto &i:departmentEmployees ){
        i->displayEmployee();
    }
}