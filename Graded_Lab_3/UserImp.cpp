// ******************************************************************
// Programmer: Abdullah Nazir
// Date: January 8, 2024
//
// Implementation file UserImp.cpp
// This implementation file contains the definitions of
// functions of class User.
// ******************************************************************

#include "User.h"
#include <iostream>
#include <iomanip>

using namespace std;

User::User() : username("Unknown"), dateJoined("08-01-2024"){}

User::User(string name, string date) : username(name), dateJoined(date){}

void User::displayUserInfo(){
    cout << left;
    cout << setw(15) << "Username: " << username << endl;
    cout << setw(15) << "Date Joined: " << dateJoined << endl;
}