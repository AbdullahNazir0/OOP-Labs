#include <iostream>
#include "Author.h"
#include "Book.h"

using namespace std;

int main(){

    Book book1, book2("Peer e Kamil", 799.99, "Umera Ahmed", "Umeraahmad@gmail.com", 1973);
    book1.displayBook();
    book2.displayBook();
    

    cout << "This is aggregation." << endl;

    return 0;
}

// g++ Task\ 1/main.cpp Task\ 1/Author.cpp Task\ 1/Book.cpp