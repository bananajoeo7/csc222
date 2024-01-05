#include <iostream>
#include <cmath>
using namespace std;

void powers(int x) {
    while (x < 66537) {
        cout << x << "\t" << log(x) / log(2.0) << endl;
        x = x * 2.0;
    }
}

int main() {
    double n = 1.0;
    powers(n);
}