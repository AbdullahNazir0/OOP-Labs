#include "Student.h"

Student::Student(int studId, const string &studName) : studentId(studId), studentName(studName){}
void Student::displayStudent(){
    std::cout << "Student ID: " << studentId << std::endl;
    std::cout << "Student Name: " << studentName << std::endl;
}