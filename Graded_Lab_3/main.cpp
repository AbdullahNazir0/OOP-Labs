// ******************************************************************
// Programmer: Abdullah Nazir
// Date: January 8, 2024
//
// This program uses the classes User, Profile and Post to implement
// a simplified version of a social media platform.
// ******************************************************************

#include "Profile.h"
#include "Post.h"

using namespace std;

int main(){

    Post p1, p2("Abdullah", "08-01-2024", 666, "This is the post");
    p1.displayPostInfo();
    p2.displayPostInfo();

    Profile pr1, pr2("Azan", "08-01-2024", "This is the bio", 99);
    pr1.displayProfileInfo();
    pr2.displayProfileInfo();

    return 0;
}

//   g++ .\main.cpp .\ProfileImp.cpp .\PostImp.cpp .\UserImp.cpp