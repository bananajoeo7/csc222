#include <iostream>
using namespace std;

void OverLoadF(int p) {
    cout << "Im overloaded function 1, with signature  olf(int)" << endl;
}

void OverLoadF(int p, int q) {
    cout << "Im overloaded function 2, with signature  olf(int, int)" << endl;
}

void OverLoadF(float p) {
    cout << "Im overloaded function 3, with signature  olf(float)" << endl;
}

void OverLoadF(double p) {
    cout << "Im overloaded function 4, with signature  olf(double)" << endl;
}

void OverLoadF(char p) {
    cout << "Im overloaded function 5, with signature  olf(char)" << endl;
}

int main() {
    int i = 1;
    int j = 2;
    float m = 3.0;
    double e = 69.0;
    char loop = 'l';

    OverLoadF(i);
    OverLoadF(i, j);
    OverLoadF(j);
    OverLoadF(m);
    OverLoadF(e);
    OverLoadF(loop);

    return 0;
}