#include <iostream>
#include "Book.h"

using namespace std;

int main(){

    char* title = "Sahih Bukhari";
    char* author = "Imam Bukhari";
    int year = 800;
    int isbn = 1234;

    Book book1;
    Book book2(title, author, year, isbn);
    Book book3 = book2;
    book1.display();
    book2.display();
    book3.display();

    Book book4;
    Book book5;

    book4.deepCopy(book2);
    book5.shallowCopy(book2);   

    book1.display();
    book4.display();
    book5.display();

    char* title2 = "Sahih Muslim";
    char* author2 = "Imam Muslim";

    book2.setTitle(title2);
    book2.setAuthor(author2);

    book1.display();
    book4.display();
    book5.display();

    return 0;
}