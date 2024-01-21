#include<iostream>
#include<fstream>
using namespace std;

int* regrow(int* arr, int& s, int v);
void copy(int* n, int* o, int s);
int* shrink(int* arr, int& s);
void displayArr(int* arr, int s);

int main()
{
    char fileName[50];
    cout << "Enter the name of file: ";
    cin >> fileName;
    ifstream fin;
    fin.open(fileName);
    if(! fin)
    {
        cout << "Can't find file with name '" << fileName << "'." << endl;
    }
    else
    {
        int* data = new int[1];
        int size = 1;
        int val;
        fin >> val;
        data[0] = val;
        while(fin >> val)
        {
            data = regrow(data, size, val);
        }

        cout << "Data: " << endl;
        displayArr(data, size);

        // for(int i = 0; i < size; i++)
        // {
        //     if(data[i] > 9)
        //     {
        //         for(int j = i; j < size - 2; j++)
        //         {
        //             data[j] = data[j + 1];
        //         }
        //         data = shrink(data, size);

        //     }
        // }

        int i = 0; 

        for (int j = 0; j < size; j++)
        {
            if (data[j] <= 9)
            {
                data[i] = data[j];
                i++;
            }
        }

        size = i;

        cout << "Single-digit: " << endl;
        displayArr(data, size);

        delete[]data;
        fin.close();
    }
    return 0;
}

int* regrow(int* arr, int& s, int v)
{
    int *newArr = new int[s + 1];
    copy(newArr, arr, s);
    newArr[s] = v;
    s++;
    delete[]arr;
    return newArr;
}

void copy(int* n, int* o, int s)
{
    for(int i = 0; i < s; i++)
    {
        n[i] = o[i];
    }
}

// int* shrink(int* arr, int& s)
// {
//     int* newArr = new int[s - 1];
//     copy(newArr, arr, s - 1);
//     s--;
//     delete[]arr;
//     return newArr;
// }

void displayArr(int*arr, int s)
{
    cout << "The data in array is ";
    for(int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}