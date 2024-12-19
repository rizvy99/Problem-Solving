#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int x = 0, y = 0;
     for (int __ = 0; __ < 100; __++) {
        for (auto c : s) {
            if (c == 'N') {
                y += 1;
            } else if (c == 'E') {
                x += 1;
            } else if (c == 'S') {
                y -= 1;
            } else if (c == 'W') {
                x -= 1;
            }
             if (x == a && y == b) {
                cout << "YES"<<el;
                return;
            }
        }
    }
     cout << "NO"<<el;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
