#include <iostream>
#include <fstream>
#include "Functions.h"
using namespace std;

int main()
{
    ifstream fin;
    fin.open("numbers.txt");
    if(! fin)
    {
        cout << "File is missing.";
    }
    else
    {
        int* data = new int[1];
        int s = 0;
        readData(fin, data, s);
        fin.close();

        while(true)
        {
            int choice;
            cout << "Enter 1 to find sum of data.\n"
                    "Enter 2 to find average of data.\n"
                    "Enter 3 to sort the data.\n"
                    "Enter 4 to display data.\n"
                    "Enter 5 to display number of data members.\n"
                    "Enter 0 to exit.\n"
                    "You entered: ";
            cin >> choice;

            switch(choice)
            {
                case 1:
                    cout << "The sum of data is " << sum(data, s) << endl;
                    break;
                case 2:
                    cout << "The average of data is " << avg(data, s) << endl;
                    break;
                case 3:
                    sortArr(data, s);
                    cout << "Data sorted successfully." << endl;
                    break;
                case 4:
                    displayArr(data, s);
                    break;
                case 5:
                    cout << "The total data members are " << s << endl;
                    break;
                case 0:
                    delete[] data;
                    return 0;
                    break;
                default:
                    cout << "Invalid input. Please try again." << endl;
                    break;
            }
        }
    }

    return 0;
}