#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Point.h"
#include <iostream>
using namespace std;

TEST_CASE("Test can create and render a Point number") {
    Point p1;
    CHECK(p1.str_point() == "(0.000000, 0.000000)");
    Point p2(2, 3);
    CHECK(p2.str_point() == "(2.000000, 3.000000)");
}

TEST_CASE("Test can add Point numbers with +") {
    Point p1(2, 3);
    Point p2(4, 7);
    Point sum = p1 + p2; 
    CHECK(sum.str_point() == "(6.000000, 10.000000)");
}

TEST_CASE("Test can subtract Point numbers with -") {
    Point c1(2, 3);
    Point c2(4, 7);
    Point diff = c1 - c2; 
    CHECK(diff.str_point() == "(-2.000000, -4.000000)");
}