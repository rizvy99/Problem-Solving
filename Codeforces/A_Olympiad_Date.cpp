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
        int n;
        cin >> n;
        string s = "01032025";
        map<char, int> mp;
        for (auto ch : s) {
            mp[ch]++;
        }
        map<char, int> mp1;
        int ans = 0;
        //vector<int>v(n);
        for (int i = 1; i <= n; i++) {
            //cin >> v[i];
            int x;
            cin>>x;
            char ch = x + '0';  
            mp1[ch]++;
            bool flag = true;
            for (auto p : mp) {
                if (mp1[p.first] < p.second) {
                    flag = false;
                    break;
                }
            }
            if (flag && ans == 0) {
                ans = i;  
            }
        }

         
        cout << ans << el;
    }

    return 0;
}