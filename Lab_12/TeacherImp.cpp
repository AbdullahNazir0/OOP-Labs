#include "Teacher.h"

#include <iostream>
#include <iostream>
#include <iomanip>

using namespace std;

Teacher::Teacher() : User(), coursesTeaching(nullptr), teachingCoursesCount(0){}

Teacher::Teacher(string name, int id, string *crs, int count) : User(name, id), teachingCoursesCount(count)
{
    if(!crs)
        return;
    coursesTeaching = new string[count];
    for(int i = 0; i < count; i++)
        coursesTeaching[i] = crs[i];
}

void Teacher::assignCourse(const string &course)
{
    if(!coursesTeaching)
    {
        coursesTeaching = new string[teachingCoursesCount + 1];
        coursesTeaching[teachingCoursesCount] = course;
        teachingCoursesCount++;
    }
    else 
    {
        string* newCourses = new string[teachingCoursesCount + 1];
        for(int i = 0; i < teachingCoursesCount; i++)
            newCourses[i] = coursesTeaching[i];
        newCourses[teachingCoursesCount] = course;
        teachingCoursesCount++;
        delete[] coursesTeaching;
        coursesTeaching = newCourses;
    }
}

void Teacher::displayTeacherInfo()
{
    cout << left;
    User::displayUserInfo();
    cout << "Teaching Courses: " << endl;
    if(!teachingCoursesCount)
        cout << "\tNo courses assigned." << endl;
    else 
    {
        cout << right;
        for(int i = 0; i < teachingCoursesCount; i++)
            cout << "\t" << setw(2) << i + 1 << ". " << coursesTeaching[i] << endl;
    }
    cout << endl;
}

Teacher::~Teacher()
{
    if(coursesTeaching)
        delete[]coursesTeaching;
}