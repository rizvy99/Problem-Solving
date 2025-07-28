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
        ll n, a, b;
        cin >> n >> a >> b;
        ll max_k = min(n, b);
        ll k = b - a + 1;
        k = max(0LL, min(k, max_k));
        ll cal = k * (2 * b - k + 1) / 2;
        ll cal4 = (n - k) * a;
        ll ans = cal + cal4;
        if (k + 1 <= max_k) {
            ll k2 = k + 1;
            ll cal2 = k2 * (2 * b - k2 + 1) / 2;
            ll reg = (n - k2) * a;
            ans = max(ans, cal2 + reg);
        }
        if (k - 1 >= 0) {
            ll k3 = k - 1;
            ll cal3 = k3 * (2 * b - k3 + 1) / 2;
            ll reg1 = (n - k3) * a;
            ans = max(ans, cal3 + reg1);
        }

        cout << ans << el;
    }

    return 0;
}
