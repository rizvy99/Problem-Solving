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
        int n,cnt=0;
        cin>>n;
        vector<ll>v(n);
       
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    if (n < 2) {
        cout << "No" << el;
        return 0;
    }
    if (v[0] == 0) {
        cout << "No" << el;
        return 0;
    }
    long double div = (long double)v[1] / v[0];
    for (int i = 1; i < n; i++) {
        if (v[i - 1] == 0 || (long double)v[i] / v[i - 1] != div) {
            cout << "No" << el;
            return 0;
        }
    }

    cout << "Yes" << el;
    return 0;
}
