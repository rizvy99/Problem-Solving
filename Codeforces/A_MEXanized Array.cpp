#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n, k, x;
        cin >> n >> k >> x;
         if (x < k) {
            cout << -1 << endl;
            continue;
        }
         int sum = (n - 1) * x;
         if (k - 1 > 0) {
            sum += k - 1;
        }
        cout << sum << endl;
    }
    return 0;
}
