#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>
using std::string;

class Teacher {
private:
    int teacherId;
    string teacherName;
public:
    Teacher(int teachId = 000, const string &teachName = "");
    void displayTeacher();
};

#endif