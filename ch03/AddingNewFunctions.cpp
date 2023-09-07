#include <iostream>
#include <math.h>
using namespace std;

/* Answer:
Since the function has been created after its been called in main() the function
new_line() wont work unless the function is called previuosly. Also note in the original 
code there is a syntax error where its called in the function as newLine() instead of 
new_line().
*/

void new_line();

int main() {
    cout << "First Line." << endl;
    new_line();
    cout << "Second Line." << endl;
    return 0;
}

void new_line() {
    cout << endl;
}