// ******************************************************************
// Programmer: Abdullah Nazir
// Date: January 8, 2024
//
// Implementation file PostImp.cpp
// This implementation file contains the definitions of
// functions of class Post.
// ******************************************************************

#include "Post.h"
#include <iostream>
#include <iomanip>

using namespace std;

Post::Post() : User(), postId(0), content("No content available"){}

Post::Post(string name, string date, int id, string con) : User(name, date), postId(id), content(con){}

void Post::displayPostInfo(){
    cout << left;
    User::displayUserInfo();
    cout << setw(15) << "Post Id: " << postId << endl;
    cout << setw(15) << "Content: " << content << endl;
}