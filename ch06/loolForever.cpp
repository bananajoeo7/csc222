#include <iostream>
#include <cmath>
using namespace std;

/* When 1 is called it will run forever because true is always true so the while loop 
will never end */

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