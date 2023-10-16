#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void shuffleArray(string* arr, int size) {
    srand(time(nullptr));

    for (int i = size - 1; i > 0; i--) {
        int j = std::rand() % (i + 1);
        if (i != j) {
            string temp = *(arr + i);
            *(arr + i) = *(arr + j);
            *(arr + j) = temp;
        }
    }
}

int main() {
    string arr[] = {"As", "2s", "3s", "4s", "5s", "6s", "7s", "8s", "9s", "10s", "Js", "Qs", "Ks", "Ad", "2d", "3d", "4d", "5d", "6d", "7d", "8d", "9d", "10d", "Jd", "Qd", "Kd", "Ac", "2c", "3c", "4c", "5c", "6c", "7c", "8c", "9c", "10c", "Jc", "Qc", "Kc", "Ah", "2h", "3h", "4h", "5h", "6h", "7h", "8h", "9h", "10h", "Jh", "Qh", "K"};
    int size = sizeof(arr) / sizeof(arr[0]);

    shuffleArray(arr, size);

    std::cout << "Shuffled array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
