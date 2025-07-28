#include <iostream>
#include <string>
#include <sstream>

int main() {
    // Step 1: Define X as 10^50 (smallest valid X)
    std::string X = "1";
    for (int i = 0; i < 50; ++i) {
        X += "0";
    }

    // Step 2: Construct S
    std::string S;
    unsigned long long base = 1;
    for (int i = 0; i < 50; ++i) {
        base *= 10; // Compute 10^50
    }
    for (int i = 1; i <= 1000; ++i) {
        // Multiply base by i and append to S
        unsigned long long current = base * i;
        S += std::to_string(current);
    }

    // Ensure S length is within the limit
    if (S.length() > 5000) {
        S = S.substr(0, 5000);
    }

    // Step 3: Output X and S
    std::cout << X << "\n";
    std::cout << S << "\n";

    return 0;
}
