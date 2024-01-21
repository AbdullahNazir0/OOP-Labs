#include <iostream>
#include "Calendar.h"

using namespace std;

int main()
{
    Calendar c1;
    Calendar c2(31, 12, 2004);
    Calendar c3(31, 2, 2005);
    c1.printDate();
    c2.printDate();
    c3.printDate();
    return 0;
}