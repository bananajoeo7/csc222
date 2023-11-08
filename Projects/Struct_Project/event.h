#include <string>
using namespace std;

struct Event {
    int event_id;
    string event_name;
    int month, day, year;

    Event();
    Event(string, int, int, int);
    string to_string();
    void cancel();
};

Event create_event();