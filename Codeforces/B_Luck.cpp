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
        int n,cnt = 0;
        cin >> n; 
        int ar[n];
        unordered_map<int, int> val;
        for (int i = 0; i < n;i++) {
            cin >> ar[i];
            val[ar[i]]++;
            cnt = max(cnt,val[ar[i]]);
        }
        int ans = n - cnt;
        cout << ans<< el;
    }
    return 0;
}