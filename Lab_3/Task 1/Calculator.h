#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <cmath>

class Calculator
{
private:
    int num1, num2;

public:
    int sum()
    {
        return (num1 + num2);
    }
    int subtract()
    {
        return (num1 - num2);
    }
    int product()
    {
        return (num1 * num2);
    }
    double divide()
    {
        return (num1 / num2);
    }
    int square()
    {
        return (num1 * num1);
    }
    double squareRoot()
    {
        return (sqrt(num1));
    }
    int cube()
    {
        return (num1 * num1 * num1);
    }
    double cubeRoot()
    {
        return (cbrt(num1));
    }
    double log()
    {
        return (log10(num1));
    }
    void setNumbers(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }
};

#endif