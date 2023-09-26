// Authors: Trostin Geles, Caleb O'neal
// Problems Website: https://www.seminolestate.edu/computers/competition/samples/2016

#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

void are_you_my_type(int num);

int num;

int main() {
    cout << "Enter a number: " << endl;
    while (cin >> num) {
        are_you_my_type(num);
    }

    return EXIT_SUCCESS;
}

void are_you_my_type(int num) {
    vector<int> factors = {1};
    int sum = 1;

    cout << endl;
    cout << num << endl;
    
    for(int i = 2; i <= (num / 2); i++) {
        if (num % i == 0 && i != num) {
            factors.push_back(i);

            sum += i;
        }
    }

    if (sum < num) {
        cout << "Deficient";
    } else if (sum == num) {
        cout << "Perfect";
    } else {
        cout << "Abundant";
    }

    cout << " Factors are: ";
    for (int &factor : factors) {
        cout << factor << " ";
    }
    cout << endl;

    cout << "The sum of your factors is " << sum << endl << endl;
}

