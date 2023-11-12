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