#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Time {
    int hour, minute;
    double second;
};

Time increment(Time& time, double secs)
{
    time.second += secs;

    if (time.second >= 60.0) {
        time.minute += int(time.second/60);
        time.second = int(time.second) % 60;
    }
    if (time.minute >= 60) {
        time.hour += int(time.minute/60);
        time.minute = int(time.minute) % 60;
    }
    return time;
}

int main() {
    Time oTime = {11, 11, 11};
    double seconds = 1000.0;

    Time newTime = increment(oTime, seconds);

    cout << newTime.hour << ":" << newTime.minute << "." << newTime.second << endl;
}