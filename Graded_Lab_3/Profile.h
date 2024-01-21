// ******************************************************************
// Programmer: Abdullah Nazir
// Date: January 8, 2024
//
// class Profile
// This class specifies the memebers to implement the derived class
// Profile from base class User.
// ******************************************************************\

#ifndef H_Profile
#define H_Profile

#include <string>
#include "User.h"

using namespace std;

class Profile : public User {
    public:
        Profile();
        Profile(string name, string date, string bio, int fol);
        void displayProfileInfo();
    private:
        string bios;
        int followers;
};

#endif