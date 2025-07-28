#include <bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> v(4);
    int sum = 0, sum1 = 0;
    for(int i = 0; i < 4; i++) cin >> v[i];
    int val = min({v[0], v[2], v[3]});
    sum += val * 256;
    v[0] -= val;
    v[2] -= val;
    v[3] -= val;
    int val1 = min(v[0], v[1]);
    sum1 += val1 * 32;
    v[0] -= val1;
    v[1] -= val1;

    cout << sum + sum1 << el;

    return 0;
}
