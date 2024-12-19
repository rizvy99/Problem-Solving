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
        vector<ll> ar(n);
        vector<char> ar1(n);
        for (int i = 0; i < n;i++) {
            cin >> ar[i];
            ar[i]--;
        }
        for (int i = 0; i < n;i++) {
            cin >> ar1[i];
        }
        vector<bool> result(n, false);
        vector<ll> ans(n);
        for (int i = 0; i < n;i++) {
            if (!result[i]) {
                int curr = i;
                vector<int> v;
                int cnt = 0;
            while (!result[curr]) {
                result[curr] = true;
                v.push_back(curr);
                if (ar1[curr] == '0') {
                    cnt++;
                }
                curr = ar[curr];  
            }           
             for (auto u : v) {
                ans[u] = cnt;
            }
        }
    }

    for (int i = 0; i < n;i++) {
        cout << ans[i] <<" ";
    }
    cout <<el;
}
     
    return 0;
}