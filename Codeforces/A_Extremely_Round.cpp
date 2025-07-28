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
    vector<int> a;
    for (int i = 1; i < 1000000; ++i) {
        int x = i, cnt = 0;
        while (x > 0) {
            if (x % 10 != 0) cnt++;
            x /= 10;
        }     
        if (cnt == 1) a.push_back(i);
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0;
        for (int x : a) {
            if (x <= n) {
                ans++;
            } else {
                break;   
            }
        }
        cout << ans << el;
    }

    return 0;
}