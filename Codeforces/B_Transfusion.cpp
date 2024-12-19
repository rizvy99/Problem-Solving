#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        long long sum = 0;
        
        // Read the array and compute the sum
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        
        // Check if the sum is divisible by n
        if (sum % (n-1) == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
