#ifndef BOOK_H
#define BOOK_H

#include <iostream>

class Book {
public:
    // Constructors.
    Book();
    Book(char*t, char*a, int y, int i);
    Book(const Book & obj);

    // Destructor.
    ~Book();

    // Setters.
    void setTitle(char*t);
    void setAuthor(char*a);
    void setYear(int y);
    void setISBN(int i);

    // Getters.
    char* getTitle()const;
    char* getAuthor()const;
    int getYear()const;
    int getISBN()const;

    void deepCopy(const Book & obj);
    void shallowCopy(const Book & obj);

    void display();

private:
    char* title;
    char* author;
    int year;
    int isbn;
    
};

#endif