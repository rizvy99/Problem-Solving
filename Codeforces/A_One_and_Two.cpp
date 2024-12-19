#include <bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;  
    while (t--) {
        int n,cnt=0;
        cin >> n;  
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 2) cnt++;
        }
        if (cnt % 2 != 0) {
            cout << -1 << el;
            continue;
        }
        int current = 0; 
        int target = cnt / 2; 
        for (int i = 0; i < n; i++) {
            if (v[i] == 2) current++;
            if (current == target) {  
                cout << i + 1 << el;  
                break;
            }
        }
    }

    return 0;
}
