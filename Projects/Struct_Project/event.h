#include <string>

struct event {
    int event_id;
    std::string event_name;
    int month, day, year;

    event create_event();
    void to_string();
    void cancel();
};