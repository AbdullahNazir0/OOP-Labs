#include <iostream>
#include "Processor.h"
#include "Computer.h"

using namespace std;

int main(){
    Computer c1, c2("DELL", "INTEL", 2.4);
    c1.displayComputer();
    c2.displayComputer();

    std::cout << "This is Composition." << std::endl;

    return 0;
}

// g++ Task\ 4/main.cpp Task\ 4/Processor.cpp Task\ 4/Computer.cpp