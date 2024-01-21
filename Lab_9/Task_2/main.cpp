#include <iostream>
#include "RationalNumber.h"

using namespace std;

int main(){
    RationalNumber r1(1, 2), r2(3, 4), result;
    result = r1 + r2;
    result.display();
    result = r1 * r2;
    result.display();
    return 0;
}

// g++ .\Task_2\main.cpp .\Task_2\RationalNumber.cpp