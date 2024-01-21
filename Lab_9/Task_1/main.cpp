#include <iostream>
#include "Point.h"

using namespace std;

int main(){
    Point p1, p2(2, 3);
    p1.display();
    p2.display();
    p2.updateCoordinates(4, 5);
    p1.updateCoordinates(1.1, 2.2);
    p1.display();
    p2.display();
    return 0;
}

// g++ .\Task_1\main.cpp .\Task_1\Point.cpp