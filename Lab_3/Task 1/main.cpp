#include <iostream>
#include "Calculator.h"
using namespace std;

int main()
{
    int val1, val2;
    Calculator obj1;
    cout << "Enter first number: ";
    cin >> val1;
    cout << "Enter two number: ";
    cin >> val2;
    obj1.setNumbers(val1, val2);

    while (!false)
    {
        int choice;
        cout << "Enter 1 to add numbers.\n"
                "Enter 2 to subtract numbers.\n"
                "Enter 3 to multiply numbers.\n"
                "Enter 4 to divide numbers.\n"
                "Enter 5 to square the numbers.\n"
                "Enter 6 to get square root of numbers.\n"
                "Enter 7 to cube the numbers.\n"
                "Enter 8 to get cube root of numbers.\n"
                "Enter 9 to get log of numbers.\n"
                "Enter 10 to terminate the program\n"
                "You entered: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "The sum is " << obj1.sum() << endl;
            break;
        case 2:
            cout << "The subtract is " << obj1.subtract() << endl;
            break;
        case 3:
            cout << "The product is " << obj1.product() << endl;
            break;
        case 4:
            cout << "The divide is " << obj1.divide() << endl;
            break;
        case 5:
            cout << "The square is " << obj1.square() << endl;
            break;
        case 6:
            cout << "The square root is " << obj1.squareRoot() << endl;
            break;
        case 7:
            cout << "The cube is " << obj1.cube() << endl;
            break;
        case 8:
            cout << "The cube root is " << obj1.cubeRoot() << endl;
            break;
        case 9:
            cout << "The log is " << obj1.log() << endl;
            break;
        case 10:
            exit(0);
            break;
        default:
            cout << "Invalid input. Please try again.";
            break;
        }
    }
}