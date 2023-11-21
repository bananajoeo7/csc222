#include "Cards.h"
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

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

void Deck::sort() {
    for (int i = 0; i < cards.size() - 1; i++) {
        int minIndex = find_lowest(i, cards.size() - 1);
        if (minIndex != -1) {
            swap_cards(i, minIndex);
        }
    }
}

void Deck::merge_sort() {
    merge_sort_recursive(0, cards.size() - 1);
}

void Deck::merge_sort_recursive(int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        // Recursively sort the two halves
        merge_sort_recursive(low, mid);
        merge_sort_recursive(mid + 1, high);

        // Merge the sorted halves
        merge(low, mid, high);
    }
}

void Deck::merge(int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    // Create temporary arrays to hold the two halves
    vector<Card> left(n1);
    vector<Card> right(n2);

    // Copy data to temporary arrays left[] and right[]
    for (int i = 0; i < n1; i++) {
        left[i] = cards[low + i];
    }
    for (int j = 0; j < n2; j++) {
        right[j] = cards[mid + 1 + j];
    }

    // Merge the two halves back into the original deck
    int i = 0; // Initial index of first subarray
    int j = 0; // Initial index of second subarray
    int k = low; // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (left[i].rank < right[j].rank ||
            (left[i].rank == right[j].rank && left[i].suit < right[j].suit)) {
            cards[k] = left[i];
            i++;
        } else {
            cards[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left[], if there are any
    while (i < n1) {
        cards[k] = left[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right[], if there are any
    while (j < n2) {
        cards[k] = right[j];
        j++;
        k++;
    }
}

