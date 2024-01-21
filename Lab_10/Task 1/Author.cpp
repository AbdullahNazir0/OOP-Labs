#include "Author.h"

Author::Author(const string &n, const string &em, int year) : name(n), email(em), birthYear(year){}
void Author::displayAuthor() const {
    std::cout << "Author Name: " << name << std::endl;
    std::cout << "Author Email: " << email << std::endl;
    std::cout << "Author Year: " << birthYear << std::endl;
}