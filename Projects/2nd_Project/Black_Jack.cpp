#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void shuffleArray(string* arr, int size) {
    srand(time(nullptr));

    for (int i = size - 1; i > 0; i--) {
        int j = std::rand() % (i + 1);
        if (i != j) {
            string temp = *(arr + i);
            *(arr + i) = *(arr + j);
            *(arr + j) = temp;
        }
    }
}

int ReadValue(string card){
    int cardValue = 0;
    
    if (card[0] == 'A'){
        cardValue = 11;
    } else if (card[0] == 'J' || card[0] == 'Q' || card[0] == 'K') {
        cardValue = 10;
    } else {
        cardValue = card[0] - 48;       
    } 

    return cardValue;
}

void Game(string* deck, int size){
    
}

int main() {
    int testValue = ReadValue("Ks");
    cout << testValue << endl;

    string arr[] = {"As", "2s", "3s", "4s", "5s", "6s", "7s", "8s", "9s", "10s", "Js", "Qs", "Ks", "Ad", "2d", "3d", "4d", "5d", "6d", "7d", "8d", "9d", "10d", "Jd", "Qd", "Kd", "Ac", "2c", "3c", "4c", "5c", "6c", "7c", "8c", "9c", "10c", "Jc", "Qc", "Kc", "Ah", "2h", "3h", "4h", "5h", "6h", "7h", "8h", "9h", "10h", "Jh", "Qh", "K"};
    int size = sizeof(arr) / sizeof(arr[0]);

    shuffleArray(arr, size);

    cout << "Shuffled array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;



    return 0;
}
