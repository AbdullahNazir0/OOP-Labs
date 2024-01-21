#include "Functions.h"
#include <iostream>
#include <fstream>
using namespace std;

void readData(ifstream& fin, int* arr, int& s)
{
    int val;
    fin >> val;
    arr[0] = val;
    s++;
    while(fin >> val)
    {
        arr = regrow(arr, s, val);
    }
}

int* regrow(int* arr, int& s, int val)
{
    int* newArr = new int[s + 1];
    copy(newArr, arr, s);
    newArr[s] = val;
    s++;
    delete[]arr;
    return newArr;
}

void copy(int* newArr, int* oldArr, int s)
{
    for (int i = 0; i < s; i++)
    {
        newArr[i] = oldArr[i];
    }
}

int sum(int* arr, int s)
{
    int sm = 0;
    for(int i = 0; i < s; i++)
    {
        sm = sm + arr[i];
    }
    return sm;
}

double avg(int* arr, int s)
{
    return (sum(arr, s) / s);
}

void sortArr(int* arr, int s)
{
    for (int i = 0; i < s - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < s - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = true;
            }
        }
        if(flag == false)
        {
            break;
        } 
    }
}

void displayArr(int* arr, int s)
{
    cout << "The data is ";
    for(int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
