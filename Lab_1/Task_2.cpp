#include<iostream>
using namespace std;

void getArrayValues(int*p, int n);
void displayArrayValues(int*p, int n);
void displaySumAvg(int*p, int n);

int main()
{
    int myArr[5];
    int* myPtr = myArr;
    getArrayValues(myPtr, 5);
    displayArrayValues(myPtr, 5);
    displaySumAvg(myPtr, 5);

    return 0;
}

void getArrayValues(int*p, int n)
{
    cout << "Enter values of Array(" << n << "): ";
    for(int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
}

void displayArrayValues(int*p, int n)
{
    cout << "The value of Array is: ";
    for(int i = 0; i < n; i++)
    {
        cout << p[i] << "\t";
    }
    cout << endl;
}

void displaySumAvg(int*p, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + p[i];
    }
    cout << "The sum of array data is " << sum << endl;
    cout << "The average of array data is " << sum / n << endl;
}