#include <iostream>
using namespace std;

int main() {
    int t;  // Number of test cases
    cin >> t;
    
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        long long currentX = 0;  // Sum of x-direction jumps
        long long currentY = 0;  // Sum of y-direction jumps
        int moves = 0;  // Number of moves

        // Simulate jumps until both x and y targets are reached
        while (currentX < x || currentY < y) {
            moves++;
            if (moves % 2 != 0) {  // Odd move: jump in x-direction
                currentX += moves * k;
            } else {  // Even move: jump in y-direction
                currentY += moves * k;
            }
        }
        
        cout << moves << endl;  // Output the result for each test case
    }

    return 0;
}
