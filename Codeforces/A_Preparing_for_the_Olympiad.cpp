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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        vector<int> v(n + 1, 0);
        for (int i = n - 1; i >= 0; i--) {
            int op;
            if (i + 1 < n) {
                op = a[i] - b[i + 1] + v[i + 1];
            } else {
                op = a[i] + v[i + 1];
            }  
            int op1 = v[i + 1];
            v[i] = max(op, op1);
        }
        cout << v[0] << el;
    }

    return 0;
}
