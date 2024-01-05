#include <iostream>
#include <math.h>
using namespace std;

/*
Answer:
The code would end up recurring infinately because it will never meet the end condition
of n == 0 so you would have to change it so it only accepts positive numbers.
*/

void countdown(int n);

int main() {
    countdown(-5);
    countdown(5);

}

void countdown(int n) {
    if (n < 0) {
        cout << "please enter a positive number" << endl;
        return;
    } else {
        if (n == 0) {
            cout << "Blastoff!" << endl;
        } else {
            cout << n << endl;
            countdown(n-1);
        }
    }
}