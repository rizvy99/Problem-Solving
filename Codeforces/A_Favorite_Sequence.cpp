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
        vector<int> v(n);
        for (auto &e : v) {
            cin >> e;
        }
        int left = 0, right = n - 1;
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
            ans[i] = v[left++];
            } else {
            ans[i] = v[right--];
            }
        }
        for (auto u : ans) {
            cout << u << " ";
        }
        cout <<el;
        }
    return 0;
}