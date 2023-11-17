/*
Authors: Trostin Geles and Adonis Warren-Riley 
Date: 17 November 2023
Course: CSC 222: Object-Oriented Programming
*/


#include <string>
using namespace std;

struct Event {
    bool canceled;
    string name;
    int month, day, year;

    Event();
    Event(string, int, int, int);
    string to_string();
    void cancel();
};