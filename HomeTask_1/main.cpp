#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;

    char oper;
    cout << "Enter the operation you want to do to these numbers (+, -, *, /) :";
    cin >> oper;

    switch (oper)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << Add(num1, num2) << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << Subtract(num1, num2) << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << Product(num1, num2) << endl;
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << Divide(num1, num2) << endl;
        break;
    
    default:
        cout << "Invalid Operation." << endl;
        break;
    }
    return 0;
}