#include <iostream>
#include "event.h"
#include <string>
#include <array>
using namespace std;

int month_number(string mInput) {
    int mOutput = 0;

    if (mInput == "January" || mInput == "january" || mInput == "1") {
        mOutput = 1;
        return mOutput;
    } else if (mInput == "February" || mInput == "february" || mInput == "2") {
        mOutput = 2;
        return mOutput;
    } else if (mInput == "March" || mInput == "march" || mInput == "3") {
        mOutput = 3;
        return mOutput;
    } else if (mInput == "April" || mInput == "april" || mInput == "4") {
        mOutput = 4;
        return mOutput;
    } else if (mInput == "May" || mInput == "may" || mInput == "5") {
        mOutput = 5;
        return mOutput;
    } else if (mInput == "June" || mInput == "june" || mInput == "6") {
        mOutput = 6;
        return mOutput;
    } else if (mInput == "July" || mInput == "july" || mInput == "7") {
        mOutput = 7;
        return mOutput;
    } else if (mInput == "August" || mInput == "august" || mInput == "8") {
        mOutput = 8;
        return mOutput;
    } else if (mInput == "September" || mInput == "september" || mInput == "9") {
        mOutput = 9;
        return mOutput;
    } else if (mInput == "October" || mInput == "october" || mInput == "10") {
        mOutput = 10;
        return mOutput;
    } else if (mInput == "November" || mInput == "november" || mInput == "11") {
        mOutput = 11;
        return mOutput;
    } else if (mInput == "December" || mInput == "december" || mInput == "12") {
        mOutput = 12;
        return mOutput;
    } else {
        cout << "Enter the month the event occurs: " << endl;
        cin >> mInput;
        cout << endl;
        mOutput == month_number(mInput);
        return mOutput;
    }
}

event create_event() {
    string name = "";
    string mTemp = "";
    int m = 0;
    int d = 0;
    int y = 0;

    cout << "Enter a event name: " << endl;
    cin >> name;
    cout << endl;

    cout << "Enter the month the event occurs: " << endl;
    cin >> mTemp;
    cout << endl;
    m = month_number(mTemp);

    cout << "Enter the day the event occurs: " << endl;
    cin >> d;
    cout << endl;
    
    cout << "Enter the year the event occurs: " << endl;
    cin >> y;
    cout << endl;

    event newEvent = {0, name, m, d, y};

    return newEvent;
}

void event::to_string() {
    if (event_id == 0) {
        cout << "You have a " << event_name << " event on " << month << "/" << day << "/" << year << endl;
    } else {
        cout << "The event was cancled." << endl;
    }

}

void event::cancel() {
    event_id = 1;
}