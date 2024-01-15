#include "Student.h"
#include "Teacher.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{

    Student s1, s2("Abdullah Nazir", 55, nullptr, 0);
    s1.displayStudentInfo();
    s2.displayStudentInfo();

    s2.enrollInCourse("C++");
    s2.enrollInCourse("Web");

    s2.displayStudentInfo();

    string names[] = { "C++", "Java" };

    Teacher t1, t2("DS Malik", 66, names, 2);
    t1.displayTeacherInfo();
    t2.displayTeacherInfo();

    t2.assignCourse("Python");


    t2.displayTeacherInfo();

    return 0;
}

// g++ main.cpp UserImp.cpp TeacherImp.cpp StudentImp.cpp

// nodemon -x "g++ main.cpp UserImp.cpp StudentImp.cpp TeacherImp.cpp -o main; ./main" -w main.cpp -q