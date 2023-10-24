#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct Card
{
    int suit, rank;

    Card();
    Card(int s, int r);
};

Card::Card() {
    suit = 0; rank = 0;
}

Card::Card(int s, int r) {
    suit = s; rank = r;
}

bool equals(const Card& c1 ,const Card& c2) {
    return (c1.rank == c2.rank && c1.suit == c2.suit);
}

int main() {
    Card card1(1, 11);
    Card card2(1, 11);

    if (equals(card1, card2) == true) {
        cout << "Yup, that's the same card." << endl;
    }

    return 0;
}