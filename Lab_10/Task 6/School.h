#ifndef SCHOOL_H
#define SCHOOL_H

#include <iostream>
#include <vector>
#include "Teacher.h"
#include "Student.h"
using std::string,std::vector;

class School {
private:
    string schoolName;
    vector <Student*> students;
    vector <Teacher*> teachers;
public:
    School(const string &name = "", vector <Student*>studs = {}, vector<Teacher*>teachs = {});

    void addStudent(Student *stud);
    void addTeacher(Teacher *teach);
    void displaySchool();
};

#endif