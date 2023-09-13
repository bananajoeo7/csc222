#include <iostream>
using namespace std;

void olf(int p) {
    cout << "I'm overloaded function 1, with signature  olf(int).\n";
}

void olf(int p, int q) {
    cout << "I'm overloaded function 2, with signature  olf(int, int).\n";
}

void olf(float p) {
    cout << "I'm overloaded function 3, with signature  olf(float).\n";
}

int main() {
    int i = 1;
    int j = 2;
    float m = 3.0;

    olf(i);
    olf(i, j);
    olf(j);
    olf(m);

    return 0;
}