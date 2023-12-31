#include <iostream>
#include <cmath>
#include "fraction.h"
#include <string>
using namespace std;

void fraction::print() {
    cout << numerator << "/" << denominator << endl;
}

fraction::fraction(){
    numerator = 0;
    denominator = 1;
}

fraction::fraction(int n, int d){
    numerator = n;
    denominator = d;
}

void fraction::plus(fraction f2) {
    if (denominator == f2.denominator){
        numerator += f2.numerator;
        denominator += f2.denominator;
    } else {
        numerator = numerator * f2.denominator;
        f2.numerator = f2.numerator * denominator;
        numerator += f2.numerator;
        denominator = denominator * f2.denominator;
    }
}

void fraction::minus(fraction f2) {
    if (denominator == f2.denominator){
        numerator -= f2.numerator;
    } else {
        numerator = numerator * f2.denominator;
        f2.numerator = f2.numerator * denominator;
        numerator -= f2.numerator;
        denominator = denominator * f2.denominator;
    }
}

void fraction::times(fraction f2) {
    numerator = numerator * f2.numerator;
    denominator = denominator * f2.denominator;
}

void fraction::divided_by(fraction f2) {
    numerator = numerator * f2.denominator;
    denominator = denominator * f2.numerator;
}

std::string fraction::to_string(){
    std::string strNumerator = std::to_string(numerator);
    std::string strDenominator = std::to_string(denominator);

    std::string fractionR = strNumerator + "/" + strDenominator;

    return fractionR;
}