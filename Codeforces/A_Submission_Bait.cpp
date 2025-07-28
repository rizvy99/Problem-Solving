#include <bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // Sort the array in descending order
        sort(v.rbegin(), v.rend());
        
        if (n % 2 != 0) {
            // If size is odd, output "YES"
            cout << "YES" << el;
        } else {
            // Check for distinct elements
            bool allDistinct = true;
            for (int i = 1; i < n; i++) {
                if (v[i] == v[i - 1]) {
                    allDistinct = false;
                    break;
                }
            }
            if (allDistinct) {
                cout << "YES" << el;
            } else {
                cout << "NO" << el;
            }
        }
    }
    return 0;
}
