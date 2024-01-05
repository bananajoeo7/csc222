#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void count_letters() {
    string state = "Mississippi";
    int count = 0;
    int index = 0;

    count = state.find('i') + 1;
   
    cout << count << endl;
}

int main() {
    count_letters();
    
}