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
        if (v[0] == v[n - 1]) {
            cout << "NO" << el;
        } else {
            cout << "YES" << el;
             vector<char> string(n, 'R');  
            if (n > 1) {
                string[1] = 'B'; 
            }
            for (int i = 0; i < n; i++) {
                cout << string[i];
            }
            cout << el;
        }
    }

    return 0;
}
