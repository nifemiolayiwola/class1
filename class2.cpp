#include <iostream>
using namespace std;

int main() {
    int size = 5;

    // Dynamically allocate an array of 5 integers
    int* numbers = new int[size];

    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    numbers[4] = 5;

    // Calculate the sum
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
    }

    cout << "Sum = " << sum << endl;

    // Free the allocated memory
    delete[] numbers;

    return 0;
}
