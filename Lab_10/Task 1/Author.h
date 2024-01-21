#ifndef AUTHOR_H
#define AUTHOR_H

#include <iostream>
using std::string;

class Author {
private:
    string name;
    string email;
    int birthYear;

public:
    Author(const string &n = "unknown", const string &em = "unknown", int year = 2000);
    void displayAuthor() const ;
};

#endif