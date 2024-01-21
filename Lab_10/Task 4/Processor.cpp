#include "Processor.h"

Processor::Processor(const string &br, double sp) : brand(br), speed(sp){}
void Processor::displayProcessor() const {
    std::cout << "Processor Brand: " << brand << std::endl;
    std::cout << "Processor Speed: " << speed << " GHz" << std::endl << std::endl;
}