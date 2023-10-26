#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

struct Card
{
    int suit, rank;

    Card();
    Card(int s, int r);
    string to_string() const;
};

Card::Card() {
    suit = 0; rank = 0;
}

Card::Card(int s, int r) {
    suit = s; rank = r;
}

string Card::to_string() const
{
    vector<string> suit_strings = {"Clubs", "Diamonds", "Hearts", "Spades"};
    vector<string> rank_strings = {"", "2", "3", "4", "5", "6", "7",
                                   "8", "9", "10", "Jack", "Queen", "King", "Ace"};

    return rank_strings[rank] + " of " + suit_strings[suit];
}

vector<Card> build_deck() {
    vector<Card> deck(52);
    int i = 0;
    for (int suit = 0; suit <= 3; suit++) {
        for (int rank = 1; rank <= 13; rank++) {
            deck[i].suit = suit;
            deck[i].rank = rank;
            i++;
        }
    }
    return deck;
}

int main (){
    build_deck();
}