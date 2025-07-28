#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
void solve() {
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll total_cycle = a + b + c;  
    ll full_cycles = (n - 1) / total_cycle;  
    ll total = full_cycles * total_cycle;  
    ll day = full_cycles * 3;  
    while (total < n) {
        day++;
        if (day % 3 == 1) {
            total += a;
        } else if (day % 3 == 2) {
            total += b;
        } else {
            total += c;
        }
    }
    cout << day << el;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
