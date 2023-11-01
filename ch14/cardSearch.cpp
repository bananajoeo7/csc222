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
    bool equals(const Card& c2);
    int find(const vector<Card>& deck);
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

bool Card::equals(const Card& c2) {
    return (rank == c2.rank && suit == c2.suit);
}

int Card::find(const vector<Card>& deck) {
    Card card = {suit, rank};
    
    for (int i = 0; i < deck.size(); i++) {
        if (card.equals(deck[i])) return i;
        }

    return -1;
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
    vector<Card> deck = build_deck();
    Card card1 = deck[17];
    int index = card1.find(deck);
    cout << "Your card was found at index " << index << "." << endl;

    return 0;
}