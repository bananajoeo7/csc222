#include <iostream>
#include <cmath>
#include <string>
#include "fraction.cpp"
using namespace std;

int main(){
    fraction fraction1 = {15, 4};
    fraction fraction2 = {16, 3};

    string fractionString = fraction1.to_string();
    cout << fractionString << endl;

    fraction2.print();

    fraction1.plus(fraction2);
    fraction1.print();

    fraction1.minus(fraction2);
    fraction1.print();

    fraction1.times(fraction2);
    fraction1.print();

    fraction1.divided_by(fraction2);
    fraction1.print();

    return 0;
}