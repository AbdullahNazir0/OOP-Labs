#include <iostream>
#include "Student.h"
#include "Department.h"

using namespace std;

int main(){
    Department*dep = new Department("FOIT & CS");
    Student s1, s2(788, "Abdullah Nazir", dep);
    s1.displayStudent();
    s2.displayStudent();
    dep = nullptr;
    return 0;
}

// g++ Task\ 5/main.cpp Task\ 5/Student.cpp Task\ 5/Department.cpp