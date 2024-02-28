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
        ll l, r, a,d=0,m=0,div=0,prev=0; 
        cin >> l >> r >> a;
        d = r / a;
        m = r % a;
        div = d + m;
        prev = (d - 1) * a + (a - 1);
        
        if (prev >= l) {
            ll tmp = (d - 1) + (a - 1);
            div = max(div, tmp);
        }

        cout << div << endl;
    }

    return 0;
}