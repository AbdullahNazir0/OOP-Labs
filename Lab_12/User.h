#ifndef H_User
#define H_User

#include <string>

using namespace std;

class User 
{
    public:
        void displayUserInfo();
        User();     // Default constructor.
        User(string, int);     // Parameterized constructor.
        // User(string = "", int = 0);
    private:
        string username;
        int userId;
};

#endif