#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include "Author.h"
using std::string;

class Book {
private:
    string title;
    double price;
    Author* author;

public:
    Book(const string &tit = "unknown", double pr = 0.0, const string &n = "unknown", const string &em = "unknown", int year = 2000);
    void displayBook() const ;
    ~Book();
};

#endif