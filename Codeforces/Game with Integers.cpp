#include <iostream>

using namespace std;

int main() {
    int t;
    cout << "Enter the number of test cases (t): ";
    cin >> t;

    while (t--) {
        int n;
        cout << "Enter the value of n: ";
        cin >> n;

        // Vanya starts the game
        bool vanyaTurn = true;

        for (int i = 0; i < 10; ++i) {
            // If after Vanya's move the integer is divisible by 3, Vanya wins
            if ((n+i) % 3 == 0) {
                cout << "First" << endl;
                break;
            }

            // If it's Vova's turn, he plays optimally by choosing the move that makes (n % 3) equal to 0
            if (!vanyaTurn) {
                if ((n + 1) % 3 == 0) {
                    n += 1;
                } else {
                    n -= 1;
                }
            } else {
                // Vanya plays optimally by choosing the move that makes (n % 3) not equal to 0
                if ((n + 1) % 3 != 0) {
                    n += 1;
                } else {
                    n -= 1;
                }
            }

            // Switch turn to the other player
            vanyaTurn = !vanyaTurn;
        }

        // If 10 moves have passed and Vanya has not won, Vova wins
        if (n % 3 != 0) {
            cout << "Second" << endl;
        }
    }

    return 0;
}
