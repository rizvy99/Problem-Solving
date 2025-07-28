#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
map<ll, ll> mp;
ll coin(ll n) {
    if (n <= 3) return 1;
    if (mp.count(n)) return mp[n];
    mp[n] = 2 * coin(n / 4);  
    return mp[n];
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;  

    while (t--) {
        long long n;
        cin >> n;
        cout << coin(n) << el;
    }

    return 0;
}
