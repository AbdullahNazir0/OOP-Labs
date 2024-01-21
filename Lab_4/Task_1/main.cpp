#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    Student stud1;
    Student stud2("Azan", 787, 3.95);
    stud1.displayStudentInfo();
    stud2.displayStudentInfo();
    stud1.setStudentName("Saqib");
    stud1.setStudentId(112);
    stud1.setStudentGrade(4.1);
    stud1.displayStudentInfo();
    return 0;
}