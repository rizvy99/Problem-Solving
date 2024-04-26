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
        ll a,b,c,first,secA,secB,second;
        cin>>a>>b>>c;
        first = abs(a - 1);
        secA = abs(b - c);
        secB = abs(c - 1);
        second = secA + secB;

        if (first < second) {
            cout << 1 <<el;
        } else if (second < first) {
            cout << 2 << el;
        }else{
            cout<<3<<el;
        }
    }
    return 0;
}