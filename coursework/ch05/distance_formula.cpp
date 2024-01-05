#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    double dsquared = dx * dx + dy * dy;
    double result = sqrt(dsquared);
    return result;
}

int main() {
    double x_1 = rand() % 100;
    double y_1 = rand() % 100;
    double x_2 = rand() % 100;
    double y_2 = rand() % 100;

    double pDistance = distance(20.0, 19.0, 18.0, 17.0);

    cout << "The ditance between your points is " << pDistance << "." << endl;
}