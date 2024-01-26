#include <iostream>

int main() {
    int numbers[6];
    int positiveCount = 0;

    std::cout << "Enter 6 numbers (positive or negative):" << std::endl;

    for (int i = 0; i < 6; ++i) {
        std::cout << "Number " << i + 1 << ": ";
        std::cin >> numbers[i];

        if (numbers[i] > 0) {
            positiveCount++;
        }
    }

    std::cout << "Total number of positive numbers: " << positiveCount << std::endl;

    return 0;
}

