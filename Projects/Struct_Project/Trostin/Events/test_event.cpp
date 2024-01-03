#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <string>
#include "doctest.h"
#include "event.h"
using namespace std;

TEST_CASE("Test can create and render MyObject") {
    Event event;
    CHECK(event.to_string() == "An event named Happy Time");
}
