#ifndef H_Animal
#define H_Animal

#include <string>

using namespace std;

class Animal
{
    public:
        Animal();
        Animal(const string &, const string &);
        virtual void displayInfo()const;
    protected:
        string name;
        string type;
};

#endif // H_Animal