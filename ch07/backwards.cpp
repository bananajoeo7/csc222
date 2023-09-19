#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void tolower(string str) {


}

void backwards(string word) {
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