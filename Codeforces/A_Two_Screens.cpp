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
        string s, t;
        cin >> s >> t;
        int cnt = 0, n = s.length(), m = t.length();
        
        for (int i = 1; i <= min(n, m); i++) {
            if (s.substr(0, i) == t.substr(0, i)) {
                cnt = i;
            }
        }
        
        cout << (n + m - max(cnt, 1) + 1) << endl;
    }
     
    return 0;
}