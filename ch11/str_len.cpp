#include <iostream>
using namespace std;

int str_len(char s[]) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

int main() {
    char string[] = "Will Caleb grow a beard when he is an adult? \0";

    cout << string << " is " << str_len(string) << " characters in length.\n";

    return 0;
}