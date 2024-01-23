#include <iostream>
using namespace std;

int main() {
    // Example array
    const int size = 1000;
    int array[size];

    // Initializing all elements to -4
    for (int i = 0; i < size; i++) {
        array[i] = -4;
    }

    // Printing the array
    for (int i = 0; i < size; i++) {
        cout << array[i] << endl;
    }

    return 0;
}
