#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <iostream>
using std::string;

class Processor {
private:
    string brand;
    double speed;
public:
    Processor(const string &br = "", double sp = 0.0);
    void displayProcessor()const;
};

#endif