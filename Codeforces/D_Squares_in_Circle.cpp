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
    ll n;
    cin >> n;
    ll r = n * n;
    ll cnt = 0;
    for (long long i = -n; i <= n; ++i) {
        for (long long j = -n; j <= n; ++j) {
            double x1 = i + 0.5, y1 = j + 0.5;
            double x2 = i + 0.5, y2 = j - 0.5;
            double x3 = i - 0.5, y3 = j + 0.5;
            double x4 = i - 0.5, y4 = j - 0.5;

            if (x1 * x1 + y1 * y1 <= r && x2 * x2 + y2 * y2 <= r && x3 * x3 + y3 * y3 <= r &&  x4 * x4 + y4 * y4 <= r) {
                cnt++;
            }
        }
    }
    cout << cnt << el;
    return 0;
}
