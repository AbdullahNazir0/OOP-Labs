// ******************************************************************
// Programmer: Abdullah Nazir
// Date: January 8, 2024
//
// Implementation file ProfileImp.cpp
// This implementation file contains the definitions of
// functions of class Profile.
// ******************************************************************

#include "Profile.h"
#include <iostream>
#include <iomanip>

using namespace std;

Profile::Profile() : User(), bios("No bio available"), followers(0){}

Profile::Profile(string name, string date, string bio, int fol) : User(name, date), bios(bio), followers(fol){}

void Profile::displayProfileInfo(){
    cout << left;
    User::displayUserInfo();
    cout << setw(15) << "User Bio: " << bios << endl;
    cout << setw(15) << "User Followers: " << followers << endl;
}