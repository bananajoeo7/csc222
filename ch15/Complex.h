#include <iostream>
#include <string>
#include <cmath>
#include <assert.h>
using namespace std;

enum Flag {POLAR};

class Complex
{
    double real, imag;
    double mag, theta;
    bool polar;

    // private accessors
    void calculate_polar();
    void calculate_cartesian();

public:
    // constructors
    Complex() {
        real = 0; imag = 0;
        polar = false;
    }

    Complex(double r, double i) {
        real = r; imag = i;
        polar = false;
    }

    Complex(double m, double t, Flag);

    // accessors
    double get_real();
    double get_imag();
    double get_mag();
    double get_theta();

    // member functions
    Complex operator + (const Complex& c);
    Complex operator - (const Complex& c);
    Complex operator * (Complex& c);
    Complex operator/(Complex& c);

    std::string str_cartesian();
    std::string str_polar();

    double abs();
};