#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll ar[n];
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        ll min = *min_element(ar, ar + n);
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (ar[i] == min) {
                cnt++;
            }
        }
        if (cnt == n) {
            cout << "NO" << el;
            continue;
        }
        if (cnt == 1) {
            cout << "YES" << el;
            continue;
        }
        bool flag = 1;
        for (int i = 0; i < n; i++) {
            if (ar[i] % min != 0) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            cout << "NO" << el;
        } else {
            cout << "YES" << el;
        }
    }
    return 0;
}
