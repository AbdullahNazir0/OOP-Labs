#include "Student.h"

Student::Student()
{
    studentName = "Null";
    studentId = 0;
    studentGrade = 0;
}
Student::Student(const std::string &n, int id, float g)
{
    studentName = n;
    studentId = id;
    studentGrade = g;
}
void Student::setStudentName(const std::string &n)
{
    studentName = n;
}
void Student::setStudentId(int id)
{
    studentId = id;
}
void Student::setStudentGrade(float g)
{
    studentGrade = g;
}
std::string Student::getStudentName() const
{
    return studentName;
}
int Student::getStudentId() const
{
    return studentId;
}
float Student::getStudentGrade() const
{
    return studentGrade;
}
void Student::displayStudentInfo() const
{
    std::cout << "The name of student is " << getStudentName() << std::endl;
    std::cout << "The id of student is " << getStudentId() << std::endl;
    std::cout << "The grade of student is " << getStudentGrade() << std::endl;
}
Student::~Student()
{
    std::cout << "Destructor called." << std::endl;
}