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
        ll ar[n], sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            sum += ar[i];
        }
        if (sum % 3 == 0) {
            cout << "0" << el;
            continue;
        }
        if (sum % 3 == 2) {
            cout << "1" << el;
            continue;
        }
        for (int i = 0; i < n; i++) {
            ll sum1 = sum - ar[i];
            if (sum1 % 3 == 0) {
                cout << "1" << el;
                goto endloop;
            }
        }
        cout << "2" << el;
        endloop:;
    }
    return 0;
}
