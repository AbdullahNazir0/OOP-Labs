#include <iostream>
#include "Vector.h"

using namespace std;

int main(){
    Vector v1(1, 3, 5);
    Vector v2(4, 5, 6);
    Vector v3 = v1 + v2;

    v1.displayVector();
    v2.displayVector();
    v3.displayVector();

}