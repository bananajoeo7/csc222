/*
Authors: Trostin Geles and Akshay Kuchibatla
December 2023
*/

#include <iostream>
#include <string>
#include <random>
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
// code box #7
int CardCollection::size() {
    return this->cards.size();
}
// code box #8
Card CardCollection::getCard(int index) {
    return this->cards[index];
}
// code box #9
Card CardCollection::lastCard() {
    return this->cards[this->cards.size() - 1];
}
// code box #10
void CardCollection::swapCards(int i, int j){
    Card temp = cards[i];
    cards[i] = cards[j];
    cards[j] = temp;
}
// code box #11
void CardCollection::shuffle() {
    srand(time(nullptr));
    for (int i = cards.size() - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        swapCards(i, j);
    }
}