#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string sumADP(int num) {
    // Vector goes here
    int sum = 0;
    string ADP = "";
    for(int i = 0; i = num; i++) {
        float division = num/i;
        // check if division is a whole number/interger
        // add division to Vector
    }

    for(int i = 0; i <= /*Vector.length()*/; i++) {
        // iterate through Vector and add each number to sum
    }

    if (sum > num) {
        ADP = "Abundant"
    } else if (sum < num) {
        ADP = "Deficient"
    } else {
        ADP = "Perfect"
    }

    cout << "Your number is " << ADP << endl;
    cout << "The products of your number are " << /*print out Vector here*/ << endl;
    cout << "The sum of your products is " << sum << endl;
}

