#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H

#include <iostream>

class RationalNumber {
private:
    int numerator;
    int denominator;

public:
    RationalNumber();
    RationalNumber(int num, int den);
    
    void setNumerator(int num);
    void setDenominator(int den);

    int getNumerator() const;
    int getDenominator() const;

    void display();

    RationalNumber operator+(const RationalNumber& obj);
    RationalNumber operator*(const RationalNumber& obj);
    bool operator==(const RationalNumber&obj);

    static int gcd(int a, int b);

};

#endif