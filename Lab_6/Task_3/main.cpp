#include <iostream>
#include "Matrix.h"

using namespace std;

int main(){
    int s;

    cout << "Enter the size of matrix 1: ";
    cin >> s;
    Matrix m1(s);
    m1.input();
    m1.display();

    cout << "Enter the size of matrix 2: ";
    cin >> s;
    Matrix m2(s);
    m2.input();
    m2.display();

    cout << "Enter the size of matrix 3: ";
    cin >> s;
    Matrix m3(s);
    m3.input();
    m3.display();

    Matrix result;
    cout << "The product of matrix 1 and 2 is " << endl;
    result = m1 * m2;
    result.display();

    cout << "The product of matrix 1 and 3 is " << endl;
    result = m1 * m3;
    
    return 0;
}