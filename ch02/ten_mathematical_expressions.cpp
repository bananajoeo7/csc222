#include <iostream>
using namespace std;

int main() {
    char period;
    int rn1, rn2, product;
    period = '.';

    for (int i = 1; i <= 10; ++i){
        rn1 = rand() % 100;
        rn2 = rand() % 100;
        product = rn1 * rn2;

        cout << i << period << " The product of " << rn1 << " and " << rn2 << " is " << product << '.' << endl;
        cout << " " << endl;
    }

    return 0;
}