#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct Time {
    int hour, minute;
    double second;

    string to_string();
};

string Time::to_string() {
    std::string strHour = std::to_string(hour);
    std::string strMinute = std::to_string(minute);
    std::string strSecond = std::to_string(second);

    string timeString = strHour + ":" + strMinute + ":" + strSecond;

    return timeString;
}


int main(){
    Time current_time = {9, 14, 30.0};
    string time1 = current_time.to_string();

    cout << current_time.to_string() << endl;

    return 0;
}