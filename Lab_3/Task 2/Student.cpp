#include "Student.h"

void Student::setStudentId(const std::string &i)
{
    studentId = i;
}
void Student::setStudentName(const std::string &n)
{
    studentName = n;
}
void Student::setStudentGrades(double *g)
{
    int s = 0;
    for (int i = 0; i < 7; i++)
    {
        studentGrades[i] = g[i];
    }
}
std::string Student::getStudentId() const
{
    return studentId;
}
std::string Student::getStudentName() const
{
    return studentName;
}
double *Student::getStudentGrades() const
{
    return studentGrades;
}
double Student::calculateAverageGrades()
{
    int s = 0;
    for (int i = 0; i < 7; i++)
    {
        s = s + studentGrades[i];
    }
    return (s / 7);
}
void Student::displayStudentData()
{
    std::cout << "The student id is " << getStudentId() << std::endl;
}