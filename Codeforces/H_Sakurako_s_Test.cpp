#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());  // Sort the array to use binary search

        int medianIndex = (n + 1) / 2 - 1;  // 0-based index of the median
        
        // Process each query
        while (q--) {
            int x;
            cin >> x;

            // Find the first element >= x
            int pos = lower_bound(a.begin(), a.end(), x) - a.begin();
            
            // Number of elements >= x
            int countGreaterEqualX = n - pos;
            
            // If count is 0, the median is a[medianIndex] as no elements can be reduced
            if (countGreaterEqualX == 0) {
                cout << 0 << " ";
            } else {
                // Calculate number of reductions that can be made
                int possibleReductions = countGreaterEqualX / 2;
                
                // The new median will be at the position: medianIndex - possibleReductions
                int newMedianIndex = max(0, medianIndex - possibleReductions);
                cout << newMedianIndex << " ";
            }
        }

        cout << "\n";  // Newline for the next test case output
    }

    return 0;
}
