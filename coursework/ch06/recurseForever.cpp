#include <iostream>
#include <cmath>
using namespace std;

/* When 1 is called it will run forever because the function calls itself with 
no end condition.*/

void recurse_forever(int n) {
    cout << "n is now " << n << "." << endl;
    recurse_forever(n + 1);
}

int main() {
    int d = 2;

    recurse_forever(1);
    cout << endl;
    recurse_forever(8);
    cout << endl;
    recurse_forever(9.0);
    cout << endl;
    recurse_forever(d);

}