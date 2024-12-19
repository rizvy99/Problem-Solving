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
    const int mod = 1e9 + 7;
    ll t;
    cin>>t;
    while(t--){
    ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        ll sum = 0;
        for (int i = 0; i < n;i++) {
            sum += v[i] % mod;
        }
         ll sum1 = 0;
        for (int i = 0; i < n;i++) {
            sum -= (v[i] + mod) % mod;
            sum1 = (sum1 + v[i] * sum % mod) % mod;
        }
         ll num = (1LL * n * (n - 1) / 2) % mod;
         ll num1 = 1, sq = mod - 2;
        while (sq > 0) {
            if (sq % 2 == 1) {
                num1 = (num1 * num) % mod;
            }
            num = (num * num) % mod;
            sq /= 2;
        }
         ll ans = (sum1 * num1) % mod;
        cout << ans <<el;
    }

    return 0;
}