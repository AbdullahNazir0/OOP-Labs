// ******************************************************************
// Programmer: Abdullah Nazir
// Date: January 8, 2024
//
// class Post
// This class specifies the memebers to implement the derived class
// Post from base class User.
// ******************************************************************\

#ifndef H_Post
#define H_Post

#include "User.h"
#include <string>

using namespace std;

class Post : private User {
    public:
        Post();
        Post(string name, string date, int id, string con);
        void displayPostInfo();

    private:
        int postId;
        string content;
};

#endif