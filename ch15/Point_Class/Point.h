#include <iostream>
#include <string>
#include <cmath>
#include <assert.h>
using namespace std;

class Point
{
    double x, y;

public:
    // constructors
    Point() {
        x = 0; y = 0;
    }

    Point(double xVal, double yVal) {
        x = xVal; y = yVal;
    }

    // accessors
    double get_x();
    double get_y();
    string str_point();

    // member functions
    Point operator + (const Point& p);
    Point operator - (const Point& p);

    friend ostream & operator<<(ostream &os, const Point &c);
};