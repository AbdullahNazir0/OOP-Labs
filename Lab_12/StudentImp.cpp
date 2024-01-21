#include "Student.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void Student::enrollInCourse(const string &course)
{
    if(!courses)
    {
        courses = new string[coursesCount + 1];
        courses[coursesCount] = course;
        coursesCount++;
    }
    else 
    {
        string* newCourses = new string[coursesCount + 1];
        for(int i = 0; i < coursesCount; i++)
            newCourses[i] = courses[i];
        newCourses[coursesCount] = course;
        coursesCount++;
        delete[] courses;
        courses = newCourses;
    }
}

void Student::displayStudentInfo()
{
    cout << left;
    User::displayUserInfo();
    cout << "Courses: " << endl;
    if(!courses)
        cout << "\tNo courses enrolled." << endl;
    else 
    {
        cout << right;
        for(int i = 0; i < coursesCount; i++)
            cout << "\t" << setw(2) << i + 1 << ". " << courses[i] << endl;
    }
    cout << endl;
}

Student::Student() : User(), courses(nullptr), coursesCount(0){}

Student::Student(string name, int id, string *crs, int num) : User(name, id), coursesCount(num)
{
    if(!crs)
        courses = nullptr;
    else 
    {
        courses = new string[num];
        for(int i = 0; i < num; i++)
            courses[i] = crs[i];
    }
}

Student::~Student()
{
    if(courses)
        delete[]courses;
}