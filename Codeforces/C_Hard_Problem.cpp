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
        ll m, a, b, c;
        cin >> m >> a >> b >> c;
        ll min1 = min(m, a);  
        ll min2= min(m, b);  
        ll seats = 2 * m - min1 - min2;  
        ll monkeys = c;  
        ll min3 = min(seats,monkeys);
        ll sum = min1 + min2 + min3;
        cout << sum <<el;
    }

    return 0;
}