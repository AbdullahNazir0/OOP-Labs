#include <iostream>
#include "School.h"
using namespace std;

int main(){
    School s1("My School");
    s1.addStudent(new Student());
    s1.addStudent(new Student(788, "Abdullah"));
    s1.addTeacher(new Teacher());
    s1.addTeacher(new Teacher(799, "Azan Awan"));
    s1.displaySchool();
    return 0;
}

// g++ Task\ 6/main.cpp Task\ 6/School.cpp Task\ 6/Teacher.cpp Task\ 6/Student.cpp