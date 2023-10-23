#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct Time {
    int hour, minute;
    double second;
    Time(int, int, double);

    void print();
    void increment(double secs);
};

Time::Time(int h, int m, double s)
{
  hour = h; minute = m; second = s;
}

void Time::print()
{
    cout << hour << ":" << minute << ":" << second << endl;
}

void Time::increment(double secs)
{
    second += secs;

     if (second >= 60.0) {
        minute += int(second/60);
        second = int(second) % 60;
    }
    if (minute >= 60) {
        hour += int(minute/60);
        minute = int(minute) % 60;
    }
}

int main(){
    Time current_time(9, 14, 30.0);

    return 0;
}