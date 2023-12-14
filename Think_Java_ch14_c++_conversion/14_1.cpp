#include <iostream>
#include <string>
#include "14_1.h"
using namespace std;

CardCollection::CardCollection(string label) {
    this->label = label;
    this->cards = vector<Card>(); 
}
// code box #2
void CardCollection::addCard(Card card) {
    this->cards.push_back(card);
}
// code box #3
void CardCollection::addCard2(Card card) {
    cards.push_back(card);
}
// code box #4
Card CardCollection::popCard(int i) {
    Card card1 = cards[i];
    cards.erase(cards.begin() + i);
    return card1;
}
// code box #5
Card CardCollection::popCard() {
    int i = cards.size() - 1;
    return popCard(i);
}
// code box #6
bool CardCollection::isEmpty() {
    return this->cards.size() == 0;
}