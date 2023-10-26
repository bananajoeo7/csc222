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
        } 

        totalVal += cardVal;
        
        //Printed out the addition and new values (helped with debbuging).
        /*cout << cardVal << endl;
        cout << totalVal << endl;
        cout << endl;
        */
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

bool bust(string* hand, int size){
    int handVal = ValueCount(hand, size);
    
    cout << "handVal: " << handVal << endl;

    if (handVal > 21){
        cout << "You lost. (T-T)" << endl;
        return true;
    }
    return false;
}

bool standOrHit(string* pVal, string* cDeck){
    string response = "";
    int pCount = 2;

    while (true) {
        cout << "Do you want to stand or hit? (s/h)" << endl;
        cin >> response;

        if (response == "h") {
            pVal[pCount] = cDeck[cardcount];

            cout << "Your current hand is:" << endl;
            printCardValues(pVal, "false");

            pCount += 1;
            cardcount += 1;
            int loss = bust(pVal, 11);
            if (loss == true){
                return true;
            }
        } else if (response == "s"){
            return false;
        } else {
            cout << "please enter 's' or 'h'" << endl;
        }

    }

    
}

bool dealerHand(string* dVal, string* dDeck){
    int dCount = 2;

    while (true) {
        int dHandVal = ValueCount(dVal, 11);

        int dLoss = bust(dVal, 11);
        if (dLoss == true) {
            cout << "Dealers current hand is: " << endl;
            printCardValues(dVal, "false");
            cout << "You Won!!!, the dealer BUSTED!!!" << endl;
            return true;
        } else if (dHandVal < 17) {
            dVal[dCount] = dDeck[cardcount];

            cout << "Dealers current hand is: " << endl;
            printCardValues(dVal, "false");

            dCount += 1;
            cardcount += 1;
        } else {
            return false;
        }
    }
}

void winner(string* dFinal, string* pFinal){
    int dFVal = ValueCount(dFinal, 11);
    int pFVal = ValueCount(pFinal, 11);

    string playerWin = "";

    if (pFVal > dFVal) {
        playerWin = "won";
    } else {
        playerWin = "didn't win";
    }

    cout << "You " << playerWin << ", your score was " << pFVal << " and the dealers score was " << dFVal << "." << endl;
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

    bool ploser = standOrHit(pValues, deck);


    if (ploser == false){
        bool dloser = dealerHand(dValues, deck);
        if (dloser == false){
            winner(dValues, pValues);
        }
    }
}

int main() {
    string cardDeck[] = {"As", "2s", "3s", "4s", "5s", "6s", "7s", "8s", "9s", "10s", "Js", "Qs", "Ks", "Ad", "2d", "3d", "4d", "5d", "6d", "7d", "8d", "9d", "10d", "Jd", "Qd", "Kd", "Ac", "2c", "3c", "4c", "5c", "6c", "7c", "8c", "9c", "10c", "Jc", "Qc", "Kc", "Ah", "2h", "3h", "4h", "5h", "6h", "7h", "8h", "9h", "10h", "Jh", "Qh", "K"};
    int size = sizeof(cardDeck) / sizeof(cardDeck[0]);

    shuffleArray(cardDeck, size);

    //Prints out the new card deck order
    /*  
    cout << "Shuffled array: ";
    for (int i = 0; i < size; i++) {
        cout << cardDeck[i] << " ";
    }
    cout << endl;
    */

    game(cardDeck, size);

    return 0;
}
