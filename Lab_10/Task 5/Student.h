#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "Department.h"
using std::string;

class Student {
private:
    int studentId;
    string studentName;
    Department* studentDepartment;
public:
    Student(int studId = 000, const string &studName = "", Department*dep = nullptr);
    void displayStudent()const;
    ~Student();
};

#endif