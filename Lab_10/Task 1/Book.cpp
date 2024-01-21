#include "Book.h"

Book::Book(const string &tit, double pr, const string &n, const string &em, int year) : title(tit), price(pr), author(new Author(n, em, year)){}

void Book::displayBook() const {
    std::cout << "Book Title: " << title << std::endl;
    std::cout << "Book Price: " << price << std::endl;
    std::cout << "Book Author: " << std::endl;
    author->displayAuthor();
}

Book::~Book(){
    delete author;
}