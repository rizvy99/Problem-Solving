#include <iostream>

int main() {
    int N; // Number of test cases
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        int X, Y;
        std::cin >> X >> Y;

        // Calculate the sum of Y consecutive odd numbers
        long long sum = 0; // Using long long to handle large sums

        for (int j = 0; j < Y; j++) {
            sum += X;
            X += 2; // Move to the next odd number
        }

        // Output the result for this test case
        std::cout << sum << std::endl;
    }

    return 0;
}
