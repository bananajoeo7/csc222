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


Point lowerRight(Rectangle& lrP) {
    lrP.topleft.x = lrP.topleft.x + lrP.width;
    lrP.topleft.y = lrP.topleft.y - lrP.height;

    return lrP.topleft;
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

    Point result = {0.0, 0.0};

    result = lowerRight(myRectangle);

    cout << "The lower right points coordinates are (" << result.x << ", " << result.y << ")." << endl;
    
}



