#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

class Student{
private:
    std::string studentName;
    int studentId;
    float studentGrade;

public:
    Student();    // Default constructor.
    Student(const std::string& n, int id, float g);    // Parameterized constructor.
    void setStudentName(const std::string& n);
    void setStudentId(int id);
    void setStudentGrade(float g);
    std::string getStudentName()const;
    int getStudentId()const;
    float getStudentGrade()const;
    void displayStudentInfo()const;
    ~Student();
};

#endif