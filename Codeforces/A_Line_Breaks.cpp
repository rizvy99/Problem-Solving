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
        int n, m;
        cin >> n >> m;  
        vector<string> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i]; 
        }
        int T_length = 0, cnt = 0;
        for (int i = 0; i < n; ++i) {
            int wordLength = v[i].length();
            if (T_length + wordLength <= m) {
                T_length += wordLength;  
                cnt++;  
            } else {
                break;  
            }
        }

        cout << cnt << el;  
    }

    return 0;
}
