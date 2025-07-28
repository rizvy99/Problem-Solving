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
    cin >> t;
    while (t--) {
        ll n, d;
        cin >> n >> d;
        string s;
        cin >> s;
        int pos = 0;
        while (pos < n && (s[pos] - '0') >= d) {
            pos++;
        }
        if (pos == n) {
            s.push_back(d + '0');  
        } else {
            s.insert(pos, 1, d + '0');
        }
        
        cout << s << endl;
    }
    
    return 0;
}
