#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string tolow(string str) {
    for(int i = 0; i < str.length(); i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        }
    }
    return str;
}

int main() {
    string word;

    cout << "Enter a word:" << endl;
    cin >> word;
    
    word = tolow(word);

    cout << word << endl;

}
