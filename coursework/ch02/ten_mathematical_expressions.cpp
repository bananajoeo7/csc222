#include <iostream>
using namespace std;

int main() {
    
    for (int i = 1; i <= 10; ++i){
        int rn1 = rand() % 100;
        int rn2 = rand() % 100;
        int product = rn1 * rn2;

        cout << i << "." << " The product of " << rn1 << " and " << rn2 << " is " << product << '.' << endl;
        cout << " " << endl;
    }

    return 0;
}