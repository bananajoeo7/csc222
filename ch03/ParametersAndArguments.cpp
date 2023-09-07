#include <iostream>
#include <math.h>
using namespace std;

/* 
Answer:
Since the function calls for a char it ends up just removing the input all together 
and it outputs a empty line.
*/

void print_twice(string phil) {
    cout << phil << phil << endl;
}

int main() {
    char argument = 'b';
    int yipee = 7;
    float me_OOOW = 4.20;
    
    print_twice('a');
    print_twice(argument);
    print_twice(yipee);
    print_twice(me_OOOW);

    return 0;
}
