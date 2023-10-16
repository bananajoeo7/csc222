#include <iostream>
#include <cmath>
#include <string>
#include <array>
using namespace std;

int cardcount = 0;

void shuffleArray(string* arr, int size) {
    srand(time(nullptr));

    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        if (i != j) {
            string temp = *(arr + i);
            *(arr + i) = *(arr + j);
            *(arr + j) = temp;
        }
    }
}

// you can check amount and see if ace will bust or not
int ValueCount(string card, int size){
    int totalVal = 0;
    int cardVal = 0;
    
    for(int i = 0; i < size; i++) {
        if (card[0] == 'A'){
            if (totalVal + 11 > 21 ){
                cardVal = 1;
            }else{
                cardVal = 11;
            }
        } else if (card[0] == 'J' || card[0] == 'Q' || card[0] == 'K') {
            cardVal = 10;
        } else {
            cardVal = card[0] - 48;       
        } 

        totalVal = totalVal + cardVal;
    }


    return totalVal;
}

void printCardValues(string* cards, string d1){
    int amountC = sizeof(cards);

    if (d1 == "true"){
        cout << cards[0];
    } else {
        for (int i = 0; i < amountC; i++) {
        cout << cards[i] << " ";
        }
    }
    
    cout << endl;
}

void busted(string* deck, int size){


}

void game(string* deck, int size){
    string dValues[11] = {};
    string pValues[11] = {};

    cout << "The trashed card is:" << endl;
    cout << deck[0] << endl;
    cardcount += 1;

    pValues[0] = deck[cardcount];
    cardcount += 1;
    dValues[0] = deck[cardcount];
    cardcount += 1;
    pValues[1] = deck[cardcount];
    cardcount += 1;
    dValues[1] = deck[cardcount];
    cardcount += 1;

    cout << "Your hand is:" << endl;
    printCardValues(pValues, "false");

    cout << "The dealers card is:" << endl;
    printCardValues(dValues, "true");

    busted(pValues, 11);

}

int main() {
//test
/*    int testValue = ReadValue("Ks");
    cout << testValue << endl;
*/
    string cardDeck[] = {"As", "2s", "3s", "4s", "5s", "6s", "7s", "8s", "9s", "10s", "Js", "Qs", "Ks", "Ad", "2d", "3d", "4d", "5d", "6d", "7d", "8d", "9d", "10d", "Jd", "Qd", "Kd", "Ac", "2c", "3c", "4c", "5c", "6c", "7c", "8c", "9c", "10c", "Jc", "Qc", "Kc", "Ah", "2h", "3h", "4h", "5h", "6h", "7h", "8h", "9h", "10h", "Jh", "Qh", "K"};
    int size = sizeof(cardDeck) / sizeof(cardDeck[0]);

    shuffleArray(cardDeck, size);
    game(cardDeck, size);

    cout << "Shuffled array: ";
    for (int i = 0; i < size; i++) {
        cout << cardDeck[i] << " ";
    }
    cout << endl;



    return 0;
}
