#include <iostream>
#include <cmath>
#include <string>
#include <array>
using namespace std;

int ValueCount(string* cards, int size){
    int totalVal = 0;
    int cardVal = 0;
    
    for(int i = 0; i < size; i++) {
        string card = cards[i];
        int number = card[0];


        if (card[0] == 0){
            continue;
        } else if (card[0] == 'A'){
            if (totalVal + 11 > 21 ) {
                cardVal = 1;
            }else{
                cardVal = 11;
            }
        } else if (card[0] == 'J' || card[0] == 'Q' || card[0] == 'K') {
            cardVal = 10;
        } else if (card[0] == '1') {
            if (card[1] == '0'){
                cardVal = 10;
            } else {
                cardVal = 1;
            }
            
        } else {
            cardVal = card[0] - 48;
        //    cout << number << endl;
        //    cout << cardVal << endl;
        } 
        totalVal += cardVal;
        cout << cardVal << endl;
        cout << totalVal << endl;
        cout << endl;
    }

    return totalVal;
}

int main() {
    string arr[11] = {"2s", "3s", "5s", "7s"};
    int size = sizeof(arr) / sizeof(arr[0]);

    ValueCount(arr, size);

    return 0;
}