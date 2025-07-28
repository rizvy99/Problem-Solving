#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string n;
        cin >> n; // Read the number as a string
        
        int sum = 0;
        for (int i = 0; i < n.length(); i++) {
            int digit = n[i] - '0'; // Convert char to integer
            
            if (digit == 2) {
                sum += 4; // Square of 2
            } else if (digit == 3) {
                sum += 9; // Square of 3
            } else {
                sum += digit; // Use the digit as it is
            }
        }
        
        // Check if the sum is divisible by 9
        if (sum % 9 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
