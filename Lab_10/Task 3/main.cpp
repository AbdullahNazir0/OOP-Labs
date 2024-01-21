#include <iostream>
#include <vector>
#include "Employee.h"
#include "Department.h"
using namespace std;

int main(){
    vector <Employee*> employees = {
        new Employee(),
        new Employee(444, "Abdullah Nazir", 250000)
    };
    Department d1("FOIT & CS", employees);
    d1.displayDepartment();

    cout << "\nThis is Aggregation." << endl;
    return 0;
}

// g++ Task\ 3/main.cpp Task\ 3/Employee.cpp Task\ 3/Department.cpp 