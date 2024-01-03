#include <iostream>
#include <string>
#include "event.h"
using namespace std;

Event::Event() {
    canceled = false;
    name = "Happy Time";
    month = 1;
    day = 1;
    year = 2024;
}

Event::Event(string name, int m, int d, int y) {
    canceled = false;
    name = name;
    month = m;
    day = d;
    year = y;
}

string Event::to_string() {
    return "An event named " + name;
}

void Event::cancel() {
    canceled = true;
}
