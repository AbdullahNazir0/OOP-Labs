// ******************************************************************
// Programmer: Abdullah Nazir
// Date: January 8, 2024
//
// class User
// This class specifies the memebers to implement the base
// class user
// ******************************************************************

#ifndef H_User
#define H_User

#include <string>

using namespace std;

class User {
    public:
        User();
        User(string name, string date);
        void displayUserInfo();
    private:
        string username;
        string dateJoined;
};

#endif