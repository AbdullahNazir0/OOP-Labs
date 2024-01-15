#ifndef H_Teacher
#define H_Teacher

#include "User.h"
#include <string>

using namespace std;

class Teacher : public User 
{
    public:
        Teacher();
        Teacher(string, int, string *, int);
        void assignCourse(const string &);
        void displayTeacherInfo();
        ~Teacher();
    private:
        string *coursesTeaching;
        int teachingCoursesCount;
};

#endif