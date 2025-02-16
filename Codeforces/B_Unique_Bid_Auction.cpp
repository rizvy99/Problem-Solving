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
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n == 0) {
            cout << -1 << el;
            continue;
        }

        vector<int> arr(n);
        int max_val = INT_MIN;
        int min_val = INT_MAX;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            max_val = max(max_val, arr[i]);
            min_val = min(min_val, arr[i]);
        }

        if (min_val < 0) {
            cout << -1 << el;
            continue;
        }

        vector<int> find(max_val + 1, 0);

        for (int i = 0; i < n; i++) {
            find[arr[i]]++;
        }

        int minUniqueVal = INT_MAX;
        int minIndex = -1;

        for (int i = 0; i < n; i++) {
            if (find[arr[i]] == 1 && arr[i] < minUniqueVal) {
                minUniqueVal = arr[i];
                minIndex = i;
            }
        }

        if (minIndex != -1) {
            cout << minIndex + 1 << el;  
        } else {
            cout << -1 << el;
        }
    }

    return 0;
}
