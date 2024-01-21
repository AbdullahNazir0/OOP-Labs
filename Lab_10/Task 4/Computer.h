#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include "Processor.h"
using std::string;

class Computer {
private:
    string model;
    Processor computerProcessor;
public:
    Computer(const string &mod = "", const string &br = "", double sp = 0.0);
    void displayComputer()const;
};

#endif