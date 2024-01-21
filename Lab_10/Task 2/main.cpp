#include <iostream>
#include "Employee.h"
#include "Department.h"
using namespace std;

int main(){
    Department d1, d2("FOIT&CS", 444, "Abdullah Nazir", 250000);
    d1.displayDepartment();
    d2.displayDepartment();

    cout << "\nThis is Composition." << endl;
    return 0;
}

// g++ Task\ 2/main.cpp Task\ 2/Employee.cpp Task\ 2/Department.cpp 