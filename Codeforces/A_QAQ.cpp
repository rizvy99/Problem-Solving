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
    string s;
    cin >> s;
    int n = s.size(),cnt=0;
    for (int i = 0; i < n - 2; i++) {
        if (s[i] == 'Q') {
            for (int j = i + 1; j < n - 1; j++) {
                if (s[j] == 'A') {
                    for (int k = j + 1; k < n; k++) {
                        if (s[k] == 'Q') {
                            cnt++;
                        }
                    }
                }
            }
        }
    }
    cout << cnt << el;

    return 0;
}