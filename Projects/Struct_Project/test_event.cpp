#include <iostream>
#include "event.cpp"
#include <string>
#include <array>
using namespace std;

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

TEST_CASE("Test can create and render MyObject") {
    Event event;
    CHECK(event.to_string() == "This is MyObject");
}


/*
int main() {
    event event1 = create_event();
    event1.to_string();
    event1.cancel();
    event1.to_string();

    return 0;
}
*/