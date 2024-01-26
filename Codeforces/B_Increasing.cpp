#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        bool sorting = true;
        for (int i = 1; i < n; ++i) {
            if (a[i] <= a[i - 1]) {
                sorting = false;
                break;
            }
        }

        if (sorting) {
            cout << "YES" <<el;
        } else {
            cout << "NO" <<el;
        }
    }

    return 0;
}