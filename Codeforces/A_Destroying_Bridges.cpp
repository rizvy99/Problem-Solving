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
     while (t--) {
        int n, k;
        cin >> n >> k;
        if (k >= n - 1) {
            cout << 1 << endl;
        } else {
            cout << n << endl;
        }
    }
    
    return 0;
}