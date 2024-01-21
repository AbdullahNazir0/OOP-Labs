#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using std::string;

class Student {
private:
    int studentId;
    string studentName;
public:
    Student(int studId = 000, const string &studName = "");
    void displayStudent();
};

#endif