#include "Book.h"

Book::Book() : title("not available"), author("not available"), year(1999), isbn(1111) {
    // default constructor with defaulth year as 1999 and default isbn as 1111.
}

Book::Book(char *t, char *a, int y, int i) : title(t), author(a), year(y), isbn(i) {
    // parameterized constructor.
}

Book::Book(const Book &obj) : title(obj.title), author(obj.author), year(obj.year), isbn(obj.isbn) {
    // copy constructor.
}

Book::~Book()
{
    std::cout << "Book is being destroyed." << std::endl;
}

// Setters.
void Book::setTitle(char *t) {
    title = t;
}
void Book::setAuthor(char *a) {
    author = a;
}
void Book::setYear(int y) {
    year = y;
}
void Book::setISBN(int i) {
    isbn = i;
}

// Getters.
char *Book::getTitle() const {
    return title;
}
char *Book::getAuthor() const {
    return author;
}
int Book::getYear() const {
    return year;
}
int Book::getISBN() const {
    return isbn;
}

void Book::deepCopy(const Book & obj){
    title = obj.title;
    author = obj.author;
    year = obj.year;
    isbn = obj.isbn;
}
void Book::shallowCopy(const Book & obj){
    *this = obj;
}

void Book::display(){
    std::cout << "Title   : " << title << std::endl;
    std::cout << "Author  : " << author << std::endl;
    std::cout << "Year    : " << year << std::endl;
    std::cout << "ISBN    : " << isbn << std::endl;
}