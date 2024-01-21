#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

class Student{
private:
    std::string studentId;
    std::string studentName;
    double* studentGrades = new double[7];

public:
    void setStudentId(const std::string&i);
    void setStudentName(const std::string&n);
    void setStudentGrades(double*g);
    std::string getStudentId()const;
    std::string getStudentName()const;
    double* getStudentGrades()const;
    double calculateAverageGrades();
    void displayStudentData();

};

#endif