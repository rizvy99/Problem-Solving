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
    int t;
    cin>>t;
    while(t--){
        ll r, b, d;
        cin >> r >> b >> d;
        if (min(r, b) * (d + 1) >= max(r, b)) {
            cout << "YES" << el;
        } else {
            cout << "NO" << el;
        }
    }
    return 0;
}