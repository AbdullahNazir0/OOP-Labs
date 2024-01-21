#include "Student.h"

Student::Student(int studId, const string &studName, Department*dep) : studentId(studId), studentName(studName), studentDepartment(dep){}
void Student::displayStudent() const {
    std::cout << "Student ID: " << studentId << std::endl;
    std::cout << "Student Name: " << studentName << std::endl;
    std::cout << "Student Department: " << std::endl;
    if(!studentDepartment){
        std::cout << "No Department." << std::endl << std::endl;
    } else {
        studentDepartment->displayDepartment();
    }
}

Student::~Student(){
    delete studentDepartment;
}