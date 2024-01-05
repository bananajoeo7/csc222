#include <iostream>
#include <vector>
#include <cmath>
#include <array>
using namespace std;

void printArray(int* array, int length) {
    for (int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void shufflePure(int* array, int length) {
    for (int i = 0; i < length; i++) {
        int rand1 = 1+(rand() % length);
        int rand2 = 1+(rand() % length);
        int a = array[rand1];
        int b = array[rand2];

        array[rand1] = b;
        array[rand2] = a;
    }
    cout << "Your pure shuffled array is: " << endl;
    printArray(array, length);
}

void shuffleMod(int* array, int length) {
    srand((int) time(0));
    
    for (int i = 0; i < length; i++) {
        int rand1 = 1+(rand() % length);
        int rand2 = 1+(rand() % length);
        int a = array[rand1];
        int b = array[rand2];

        array[rand1] = b;
        array[rand2] = a;
    }
    cout << "Your modified shuffled array is: " << endl;
    printArray(array, length);
}


int main() {
    int x[10] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89};

    cout << "Your array is: " << endl;
    printArray(x, 10);
    
    shufflePure(x, 10);

    shuffleMod(x, 10);

}