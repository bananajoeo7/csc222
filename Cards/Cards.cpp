#include "Cards.h"

Card::Card() {
    suit = 0; rank = 0;
}

Card::Card(int s, int r) {
    suit = s; rank = r;
}

bool Card::equals(const Card& c1, const Card& c2) {
    return c1.rank == c2.rank && c1.suit == c2.suit;
}

std::string Card::to_string() const
{
    std::vector<std::string> suit_strings = {"Clubs", "Diamonds", "Hearts", "Spades"};
    std::vector<std::string> rank_strings = {"", "2", "3", "4", "5", "6", "7",
                                   "8", "9", "10", "Jack", "Queen", "King", "Ace"};

    return rank_strings[rank] + " of " + suit_strings[suit];
}

static std::vector<Card> build_deck() {
    std::vector<Card> deck(52);

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