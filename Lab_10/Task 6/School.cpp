#include "School.h"

School::School(const string &name, vector <Student*>studs, vector<Teacher*>teachs) : schoolName(name), students(studs), teachers(teachs){}

void School::addStudent(Student * stud){
    students.push_back(stud);
}
void School::addTeacher(Teacher * teach){
    teachers.push_back(teach);
}
void School::displaySchool(){
    std::cout << "School Name: " << schoolName << std::endl << std::endl;
    std::cout << "School Teachers: " << std::endl;
    for( auto i:teachers ){
        i->displayTeacher();
    }
    std::cout << "\nSchool Students: " << std::endl;
    for( auto i:students){
        i->displayStudent();
    }
}