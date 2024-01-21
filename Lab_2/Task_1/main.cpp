#include <iostream>
#include "Calculator.h"
using namespace std;

int main()
{
	double num1, num2;
	while (!0)
	{
		int choice;
		cout << "Enter 1 to add two numbers.\n"
			"Enter 2 to subtract two numbers.\n"
			"Enter 3 to multiply two numbers.\n"
			"Enter 4 to divide two numbers.\n"
			"Enter 5 to find square of a number.\n"
			"Enter 6 to find cube of a number.\n"
			"Enter 7 to find square root of a number.\n"
			"Enter 0 to exit.\n"
			"You Entered: ";
		cin >> choice;

		cout << "Enter first number: ";
		cin >> num1;
		cout << "Enter second number: ";
		cin >> num2;

		switch (choice)
		{
		case 1:
			cout << "The sum of " << num1 << " and " << num2 << " is " << add(num1, num2) << endl;
			break;
		case 2:
			cout << "The subtraction of " << num1 << " and " << num2 << " is " << subtract(num1, num2) << endl;
			break;
		case 3:
			cout << "The multiplication of " << num1 << " and " << num2 << " is " << multiply(num1, num2) << endl;
			break;
		case 4:
			break;
			cout << "The division of " << num1 << " and " << num2 << " is " << divide(num1, num2) << endl;
		case 5:
			cout << "The square of " << num1 << " is " << square(num1) << endl;
			break;
		case 6:
			cout << "The cube of " << num1 << " is " << cube(num1) << endl;
			break;
		case 7:
			cout << "The square root of " << num1 << " is " << squareRoot(num1) << endl;
			break;
		case 0:
			return 0;
			break;
		default:
			cout << "Invalid Input. Please Try Again." << endl;
			break;
		}
	}
	return 0;
}