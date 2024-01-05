#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string suffix = "ack";

    char letter = 'J';
    while (letter <= 'Q') {
        if (letter == 'O') {
            suffix = "ak";

        } else if (letter == 'Q') {
            suffix = "uack";

        }

        cout << letter + suffix << endl;
        suffix = "ack";
        letter++;
    }
    
}
