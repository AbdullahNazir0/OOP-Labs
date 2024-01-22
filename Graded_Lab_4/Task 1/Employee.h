// ******************************************************************
// Programmer: Abdullah Nazir
// Date Created: January 22, 2024
//
// class Employee
// This is an abstract base class from which SalariedEmployee and 
// CommissionEmployee are derived.
// *******************************************************************

#ifndef H_Employee
#define H_Employee

#include <string>

using namespace std;

class Employee
{
    public:
        Employee(const string &, const string &, const string &);
        virtual double calculateEarnings()const = 0;
        void displayInfo()const;

    private:
        string firstName;
        string lastName;
        string socialSecurityNumber;
};

#endif  // H_Employee