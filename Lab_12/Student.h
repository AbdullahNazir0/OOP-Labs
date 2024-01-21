#ifndef H_Student
#define H_Student

#include "User.h"
#include <string>

using namespace std;

class Student : public User 
{
    public:
        void enrollInCourse(const string &);
        void displayStudentInfo();
        Student();
        Student(string, int, string*, int);
        ~Student();
    private:
        string *courses;
        int coursesCount;
};

#endif