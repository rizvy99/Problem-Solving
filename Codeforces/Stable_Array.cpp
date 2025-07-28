#include <bits/stdc++.h>
#define el "\n"
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
        int max_val = *max_element(v.begin(), v.end());   
        int r_max = -1;   
        for (int i = n - 1; i >= 0; i--) {
            if (v[i] == max_val) {
                r_max = i;
                break;
            }
        }
        int ans = 0;   
        for (int i = 0; i < r_max; i++) {
            if (v[i] != max_val) {
                ans = max(ans, r_max - i);
            }
        }
        cout << ans << el;
    }
    return 0;
}
