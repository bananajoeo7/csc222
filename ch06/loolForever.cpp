#include <iostream>
#include <cmath>
using namespace std;

void lool_forever(int n) {
    while (true) {
        cout << "n is now " << n << "." << endl;
        n = n + 1;
    }
}

int main() {
    int d = 2;

    lool_forever(1);
    cout << endl;
    lool_forever(8);
    cout << endl;
    lool_forever(9.0);
    cout << endl;
    lool_forever(d);

}