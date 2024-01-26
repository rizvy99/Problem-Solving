#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
     cin >> t;

    while (t--) {
        int n;
         cin >> n;

        const int MAX_N = 2 * 100000 + 1;
        int count[MAX_N] = {0};


        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            ++count[x];
        }


        int result = -1;
        for (int i = 1; i <= n; ++i) {
            if (count[i] >= 3) {
                result = i;
                break;
            }
        }
        cout << result<< endl;
    }

    return 0;
}

