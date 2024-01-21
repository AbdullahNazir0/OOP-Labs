#include "Teacher.h"

Teacher::Teacher(int teachId, const string &teachName) : teacherId(teachId), teacherName(teachName){}
void Teacher::displayTeacher(){
    std::cout << "Teacher ID: " << teacherId << std::endl;
    std::cout << "Teacher Name: " << teacherName << std::endl;
}