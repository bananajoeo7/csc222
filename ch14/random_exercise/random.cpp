#include <cstdlib>
#include <iostream>
#include "random.h"
using namespace std;

int random_between(int l, int h) {
    int randNum = (rand() % (h - l + 1)) + l;
    cout << "Random number: " << randNum << endl;

    return 0;
}
