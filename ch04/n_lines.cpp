#include <iostream>
#include <math.h>
using namespace std;

void n_lines(int n);

int main() {
    n_lines(4);

}

void n_lines(int n) {
    if (n > 0) {
        cout << endl;
        cout << n;
        n_lines(n-1);
    }
}