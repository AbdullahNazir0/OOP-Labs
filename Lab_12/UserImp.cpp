#include "User.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void User::displayUserInfo()
{
    cout << left;
    cout << setw(15) << "Username: " << username << endl;
    cout << setw(15) << "User ID: " << userId << endl;
}

User::User() : username(""), userId(0){}

User::User(string name, int id) : username(name), userId(id){}