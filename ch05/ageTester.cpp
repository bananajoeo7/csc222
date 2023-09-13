#include <iostream>
#include <cmath>
using namespace std;

void ageTest(int age) {
    if (age > 16 && age < 65) {
          cout << "age is within the normal working age." << endl;
    }

}

int main() {
    int age1 = 3;
    int age2 = 35;
    int age3 = 50;
    int age4 = 80;

    ageTest(age1);
    ageTest(age2);
    ageTest(age3);
    ageTest(age4);
}