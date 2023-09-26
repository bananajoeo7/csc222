#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

struct Point {
    double x;
    double y;
};

struct Rectangle {
    Point topleft;
    double width;
    double height;
};


int area(Rectangle& lrP) {
    int area = 0;

    area = lrP.width * lrP.height;

    return area;
}


int main() {
    float tplX = 0.0;
    float tplY = 0.0;
    float rW = 0.0;
    float rH = 0.0;

    cout << "Enter the top left x coordinate of the rectangle: " << endl;
    cin >> tplX;
    cout << endl;

    cout << "Enter the top left y coordinate of the rectangle: " << endl;
    cin >> tplY;
    cout << endl;

    cout << "Enter the width of the rectangle: " << endl;
    cin >> rW;
    cout << endl;

    cout << "Enter the height of the rectangle: " << endl;
    cin >> rH;
    cout << endl;


    Rectangle myRectangle = {{tplX, tplY}, rW, rH};

    int area_result = 0;

    area_result = area(myRectangle);

    cout << "The area of the rectangle is " << area_result << "." << endl;
    
}



