#include <iostream>
#include <vector>
using namespace std;

void scan(vector<int>& v, int n) {
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    scan(v, n);

    vector<int> hash(n + 10, 0);

    // Count the frequency of each element in the vector v
    for (int it : v) {
        hash[it]++;
    }

    int cnt = 0;
    // Count how many elements have a frequency of 1
    for (int i = 0; i <= n; i++) {
        if (hash[i] == 1) {
            cnt++;
        }
    }

    int ans = 2 * (cnt / 2 + (cnt % 2 != 0));

    // Count elements with different frequencies (greater than 1)
    for (int i = 2; i <= n; i++) {
        cnt = 0;
        for (int j = 1; j <= n; j++) {
            if (hash[j] == i) {
                cnt++;
            }
        }
        ans += cnt;
    }

    cout << ans << endl;

    return 0;
}
