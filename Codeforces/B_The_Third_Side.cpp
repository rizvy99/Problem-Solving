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
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        while (v.size() > 1) {
            int lt = v.back(); v.pop_back();
            int se_lt = v.back(); v.pop_back();
            int ele = lt + se_lt - 1;
            v.push_back(ele);
        }
        cout << v[0] <<el;
    }
    return 0;
}
