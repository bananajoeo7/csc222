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

void backwards(string word) {
    word = tolow(word);
    string oldWord = word;
    reverse(word.begin(), word.end());
    cout << "Your word reversed is " << word << endl;

    if (oldWord == word) {
        cout << "Also your word is a palindrome" << endl;
    }

    cout << endl;

}

int main() {
    string inputWord;

    cout << "Enter a word: " << endl;
    cin >> inputWord;
    cout << endl;

    backwards(inputWord);

}