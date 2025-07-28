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
    cin>>t;
    while(t--){
        ll n;
        cin >> n;
        ll ans = -1;
        for (ll i = 1; i < n;i++) {
            ll xo = n ^ i; 
            if (n + i > xo && n + xo > i && i + xo > n) {
                ans = i;
                break;
            }
        }
        cout << ans <<el;
    }
    return 0;
}