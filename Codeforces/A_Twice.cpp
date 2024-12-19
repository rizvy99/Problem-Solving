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
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        map<int, int> mp;
        for (auto x : a) {
            mp[x]++;
        }
        int cnt = 0;
        for (int i = 0; i <=n; i++){
            cnt += mp[i] / 2;
        }
        cout << cnt << el;
    }

    return 0;
}
