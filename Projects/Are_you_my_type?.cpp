#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

void are_you_my_type(int num);

int num;

int main() {
  while (cin >> num) {
    are_you_my_type(num);
  }

  return EXIT_SUCCESS;
}

void are_you_my_type(int num) {
  vector<int> factors = {1};
  int sum = 0;

  cout << num << endl;

  for(int i = 2; i <= (num / 2); i++) {
    if (num % i == 0 && i != num) {
      factors.push_back(i);
    }
  }

  for(int &num : factors) {
    sum += num;
  }

  if (sum < num) {
    cout << "Deficient";
  } else if (sum == num) {
    cout << "Perfect";
  } else {
    cout << "Abundant";
  }

  cout << " Factors are: ";
  for (int &num : factors) {
    cout << num << " ";
  }
  cout << endl;

  cout << "The sum of your factors is " << sum << endl << endl;
}

