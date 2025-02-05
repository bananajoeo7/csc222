#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

enum Suit {
    NONE,
    CLUBS,
    HEARTS,
    DIAMONDS,
    SPADES
};

enum Rank {
    JOKER,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE
};

class Card {
    Suit suit;
    Rank rank;

    public:
        Card();
        Card(Suit s, Rank r);
        bool equals(Card& c2);
        int find(vector<Card>& deck);
        string to_string() const;
        Suit getSuit();
        Rank getRank();
};

struct Deck {
    vector<Card> cards;

    Deck();
    void swap_cards(int index1, int index2);
    int find_lowest(int l, int h);
    int find_lowest_testV(int l, int h);
    void sort();
    void merge_sort();
    void merge_sort_recursive(int low, int high);
    void merge(int low, int mid, int high);
};