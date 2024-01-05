#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string tohigh(string str) {
    for(int i = 0; i < str.length(); i++) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
    }
    return str;
}

int main() {
    string word;

    cout << "Enter a word:" << endl;
    cin >> word;
    
    word = tohigh(word);

    cout << word << endl;

}
