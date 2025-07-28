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
        int n, s;
        cin >> n >> s;
        vector<int> ar(n);
        for (int i = 0; i < n; ++i) {
            cin >> ar[i];
        }
        ll lo = ar[0];
        ll hi = ar[n - 1];
        ll dif = hi - lo;
        ll mini = min(abs(s - lo), abs(s - hi));
        cout << (dif + mini) << el;
    }
    return 0;
}