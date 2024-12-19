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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
         int maxEven = 0, countEven = 0;
        for (int i = 0; i < n; i += 2) {
            maxEven = max(maxEven, a[i]);
            countEven++;
        }
        int scoreEven = maxEven + countEven;
         int maxOdd = 0, countOdd = 0;
        for (int i = 1; i < n; i += 2) {
            maxOdd = max(maxOdd, a[i]);
            countOdd++;
        }
        int scoreOdd = maxOdd + countOdd;
         cout << max(scoreEven, scoreOdd) << "\n";
    }

    return 0;
}
