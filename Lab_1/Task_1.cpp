#include<iostream>
using namespace std;

int getValue(int);
void displayAddress(int*p, int n);
void displayValue(int*p, int n);
int getSum(int*p1, int*p2, int*p3);
int getAverage(int sum, int n);
void displaySumAverage(int*p1, int*p2, int*p3, int n);
void displayMin(int*p1, int*p2, int*p3);

int main()
{
    // Declaring three variables.
    int* var1 = new int;
    int* var2 = new int;
    int* var3 = new int;

    // Getting values of variables from users.
    *var1 = getValue(1);
    *var2 = getValue(1);
    *var3 = getValue(1);

    // Displaying Address.
    displayAddress(var1, 1);
    displayAddress(var2, 2);
    displayAddress(var3, 3);

    // Displaying Value.
    displayValue(var1, 1);
    displayValue(var2, 2);
    displayValue(var3, 3);

    // Updating the value of variable 1.
    *var1 = *var2 + *var3;

    // Displaying the updated value of variable 1.
    cout << "Updated value of variable 1: " << endl;
    displayValue(var1, 1);

    // Displaying sum and average of three numbers.
    displaySumAverage(var1, var2, var3, 3);

    // Displaying minimum of these variables.
    displayMin(var1, var2, var3);

    // Deleting memory for dynamic variables.
    delete var1;
    var1 = 0;
    delete var2;
    var2 = 0;
    delete var3;
    var3 = 0;

    return 0;
}

void displayAddress(int*p, int n)
{
    cout << "The address of variable " << n << " is " << p << endl;
}

void displayValue(int*p, int n)
{
    cout << "The value of variable " << n << " is " << *p << endl;
}

int getValue(int n)
{
    int val;
    cout << "Enter the value of variable " << n << ": ";
    cin >> val;
    return val;
}

int getSum(int*p1, int*p2, int*p3)
{
    return ((*p1) + (*p2) + (*p3));
}

int getAverage(int sum, int n)
{
    return (sum / n);
}

void displaySumAverage(int*p1, int*p2, int*p3, int n)
{
    cout << "The sum of three variables is " << getSum(p1, p2, p3) << endl;
    cout << "The Average of three variables is " << getAverage(getSum(p1, p2, p3), 3) << endl;
}

void displayMin(int*p1, int*p2, int*p3)
{
    cout << "The minimum of these variables is ";
    if(*p1 < *p2 && *p1 < *p3)
    {
        cout << *p1 << endl;
    }
    else if(*p2 < *p1 && *p2 < *p3)
    {
        cout << *p2 << endl;
    }
    else
    {
        cout << *p3 << endl;
    }
}