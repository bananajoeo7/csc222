/*
Authors: Trostin Geles and Akshay Kuchibatla
December 2023
*/

#include <iostream>
#include <cmath>
#include <string>
#include <array>
#include "Cards.h"
using namespace std;

class CardCollection {
    string label;
    vector<Card> cards;
    
    public:
        CardCollection(string label);
        void addCard(Card card);
        void addCard2(Card card);
        Card popCard(int i);
        Card popCard();
        bool isEmpty();
        int size();
        Card getCard(int index);
        Card lastCard();
        void swapCards(int i, int j);
        void shuffle();
};

class DECK: public CardCollection {
    DECK();
    void swap_cards(int index1, int index2);
    int find_lowest(int l, int h);
    int find_lowest_testV(int l, int h);
    void sort();
    void merge_sort();
    void merge_sort_recursive(int low, int high);
    void merge(int low, int mid, int high);
};