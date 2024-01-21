#include "RationalNumber.h"

RationalNumber::RationalNumber() : numerator(0), denominator(1){}
RationalNumber::RationalNumber(int num, int den) : numerator(num), denominator(den){}

void RationalNumber::setNumerator(int num){
    numerator = num;
}
void RationalNumber::setDenominator(int den){
    denominator = den;
}

int RationalNumber::getNumerator() const{
    return numerator;
}
int RationalNumber::getDenominator() const{
    return denominator;
}

void RationalNumber::display(){
    std::cout << "The rational number is " << numerator << " / " << denominator << std::endl;
}

RationalNumber RationalNumber::operator+(const RationalNumber& obj){
    RationalNumber res;
    if(denominator == obj.denominator){
        res.numerator = numerator + obj.numerator;
        res.denominator = denominator;
    } else {
        int p1 = numerator, p2 = obj.numerator, q1 = denominator, q2 = obj.denominator;
        p1 *= obj.denominator;
        q1 *= obj.denominator;
        p2 *= denominator;
        q2 *= denominator;

        res.numerator = p1 + p2;
        res.denominator = q1;
    }
    return res;
}
RationalNumber RationalNumber::operator*(const RationalNumber& obj){
    RationalNumber res;
    res.numerator = numerator * obj.numerator;
    res.denominator = denominator * obj.denominator;
    return res;
}
bool RationalNumber::operator==(const RationalNumber &obj){
    return ((numerator == obj.numerator) && (denominator == obj.denominator));
}

int RationalNumber::gcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}