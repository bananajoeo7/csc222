#include <iostream>
#include <math.h>
using namespace std;

void compare(int a, int b);

int main() {
    compare(rand() % 100, rand() % 100);

}

void compare(int a, int b) {
    if (a > b) {
        cout << a << " is greater than " << b << endl;
    } else if (a < b) {
        cout << a << " is less than " << b << endl;
    } else {
        cout << a << " is equal to " << b << endl;
    }
}