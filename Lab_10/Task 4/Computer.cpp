#include "Computer.h"

Computer::Computer(const string &mod, const string &br, double sp) : model(mod), computerProcessor(br, sp) {}
void Computer::displayComputer() const {
    std::cout << "Computer Model: " << model << std::endl;
    std::cout << "Computer Processor: " << std::endl;
    computerProcessor.displayProcessor();
}