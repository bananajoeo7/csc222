#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>
#include "event.h"
#include <string>
#include <array>
using namespace std;

TEST_CASE("Test can create and render MyObject") {
    Event event;
    CHECK(event.to_string() == "You have a Happy Time event on 1/1/2024");
}

