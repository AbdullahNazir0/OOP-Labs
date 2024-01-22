// ******************************************************************
// Programmer: Abdullah Nazir
// Date Created: January 22, 2024
//
// This program implements the weekly payload calculations in a 
// company.
// *******************************************************************

#include <iostream>
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

int main() {
    // Sample usage of the employee hierarchy
    SalariedEmployee salariedEmp("John", "Doe", "123-45-6789", 1000.0);
    CommissionEmployee commissionEmp("Jane", "Smith", "987-65-4321", 0.05, 5000.0);
    BasePlusCommissionEmployee basePlusCommissionEmp("Bob", "Johnson", "567-89-0123", 0.07, 8000.0, 1200.0);

    // Display information and calculate earnings for each employee
    salariedEmp.displayInfo();
    cout << "Weekly Earnings: $" << salariedEmp.calculateEarnings() << "\n\n";

    commissionEmp.displayInfo();
    cout << "Weekly Earnings: $" << commissionEmp.calculateEarnings() << "\n\n";

    basePlusCommissionEmp.displayInfo();
    cout << "Weekly Earnings: $" << basePlusCommissionEmp.calculateEarnings() << "\n";

    return 0;
}

// g++ '.\OOP-Labs\Graded_Lab_4\Task 1\main.cpp' '.\OOP-Labs\Graded_Lab_4\Task 1\EmployeeImp.cpp' '.\OOP-Labs\Graded_Lab_4\Task 1\SalariedEmployeeImp.cpp' '.\OOP-Labs\Graded_Lab_4\Task 1\CommissionEmployeeImp.cpp' '.\OOP-Labs\Graded_Lab_4\Task 1\BasePlusCommissionEmployeeImp.cpp'