#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

struct Card {
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

struct Deck {
    vector<Card> cards;

    Deck();
    void swap_cards(int index1, int index2);
};

struct Deck {
    vector<Card> cards;

    Deck();
    void swap_cards(int index1, int index2);
    int find_lowest(int l, int h);
};

void Deck::swap_cards(int index1, int index2) {
    if (index1 < 0 || index1 >= cards.size() || index2 < 0 || index2 >= cards.size()) {
        cout << "Invalid indices for swapping." << endl;
        return;
    }

    // Swap cards at index1 and index2
    swap(cards[index1], cards[index2]);
}

int Deck::find_lowest(int l, int h) {
    if (l < 0 || l >= cards.size() || h < 0 || h >= cards.size() || l > h) {
        cout << "Invalid range for finding the lowest card." << endl;
        return -1;
    }

    int lowestIndex = l;

    for (int i = l + 1; i <= h; i++) {
        if (cards[i].rank < cards[lowestIndex].rank ||
            (cards[i].rank == cards[lowestIndex].rank && cards[i].suit < cards[lowestIndex].suit)) {
            lowestIndex = i;
        }
    }

    return lowestIndex;
}

int main() {
    Deck deck;

    int lowestIndex = deck.find_lowest(0, 42);

    if (lowestIndex != -1) {
        cout << "Index of the lowest card between 0 and 42: " << lowestIndex << endl;
        cout << "Lowest card: " << deck.cards[lowestIndex].to_string() << endl;
    }

    return 0;
}