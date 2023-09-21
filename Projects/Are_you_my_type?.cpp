#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string sumADP(int num) {
    // List goes here
    int sum = 0;
    string ADP = "";
    for(int i = 0; i = num; i++) {
        float division = num/i;
        //check if division is a whole number/interger
        // add division to list
    }

    for(int i = 0; i <= /*list.length()*/; i++) {
        // iterate through list and add each number to sum
    }

    if (sum > num) {
        ADP = "Abundant"
    } else if (sum < num) {
        ADP = "Deficient"
    } else {
        ADP = "Perfect"
    }

    cout << "Your number is " << ADP << endl;
    cout << "The products of your number are " << /*print out list here*/ << endl;
    cout << "The sum of your products is " << sum << endl;
}

