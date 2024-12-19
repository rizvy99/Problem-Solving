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
        cin >>n;
        vector<int> v(n);
        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }
        pair<int, int> ans = {0,0};
        for (int i = 1; i * i <= n - 2; i++) {
            if (i * i == n - 2) {
                if (mp[i] > 1) {
                    ans = {i, i};
                }
                } else if ((n - 2) % i == 0) {
                    int div = (n - 2) / i;
                if (mp[i] > 0 && mp[div] > 0) {
                    ans = {i, div};
                }
            }
        }

        cout << ans.first << " " << ans.second << el;
    }

    return 0;
}