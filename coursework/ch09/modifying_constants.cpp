#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*
Result/Reflection:
    When the code is run, it gives you 2 errors with a bunch of notes on how it doesn't know
how to overload, convert, and match the const Time.
*/

struct Time {
    int hour, minute;
    double second;
};

Time add_time(const Time& t1, Time& t2)
{
    Time sum;
    sum.hour = t1.hour + t2.hour;
    sum.minute = t1.minute + t2.minute;
    sum.second = t1.second + t2.second;
    return sum;
}

int main() {
    Time time1 = {11, 11, 11.11};
    Time time2 = {6, 09, 4.20};

    Time newTime = add_time(time1, time2);

    cout << newTime << endl;
}