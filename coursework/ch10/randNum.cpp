#include <cstdlib>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> randNum();
void printVector(vector<int> pvector);

int main() {
    vector<int> randNumbers = randNum();
    printVector(randNumbers);
}

vector<int> randNum() {
    vector<int> randNumbers;
    for(int i = 0; i < 10; i++) {
        int randNumber = (rand() % 10) + 1;
        randNumbers.push_back(randNumber);

    }
    
    return randNumbers;
}

void printVector(vector<int> pVector) {
    for(int &num : pVector )
        cout << num << " ";

    return;
}