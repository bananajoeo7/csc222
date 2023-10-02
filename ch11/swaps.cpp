#include <cstdlib>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void wont_swap(char a, char b);
void will_swap(char& a, char& b);
void will_swap_with_pointers(char* a, char* b);

int main() {
    char x = 'x';
    char y = 'y';
    char c = 'c';
    char d = 'd';

    cout << "Calling will_swap_with_pointers..." << endl;
    will_swap_with_pointers(&c, &d);
    cout << "x: " << x << "  y: " << y << endl;
    cout << "address of x: " << long(&x) << endl;
    cout << "address of y: " << long(&y) << endl;
    cout << "Calling wont_swap..." << endl;
    wont_swap(x, y);
    cout << "x: " << x << "  y: " << y << endl;
    cout << "Calling will_swap..." << endl;
    will_swap(x, y);
    cout << "x: " << x << "  y: " << y << endl;

    return 0;
}


void wont_swap(char a, char b) {
    cout << "a: " << a << "  b: " << b << endl;
    cout << "address of a: " << long(&a) << endl;
    cout << "address of b: " << long(&b) << endl;
    char temp = a;
    a = b;
    b = temp;
    cout << "a: " << a << "  b: " << b << endl;
}

void will_swap(char& a, char& b) {
    cout << "a: " << a << "  b: " << b << endl;
    cout << "address of a: " << long(&a) << endl;
    cout << "address of b: " << long(&b) << endl;
    char temp = a;
    a = b;
    b = temp;
    cout << "a: " << a << "  b: " << b << endl;
}

void will_swap_with_pointers(char* a, char* b) {
    cout << "a: " << *a << "  b: " << *b << endl;
    cout << "address of a: " << long(a) << endl;
    cout << "address of b: " << long(b) << endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "a: " << *a << "  b: " << *b << endl;
}