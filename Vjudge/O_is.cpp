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

    while(t--){
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i<n;i++) {
            cin >> ar[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; ++i){
            int sum = 0, mul = 1;
            for (int j = i; j >= 0;j--) {
                sum += ar[j];
                mul *= ar[j];
                if (sum == mul) {
                    cnt++;
                }
            }
        }
        cout << cnt <<el;
    }

    return 0;
}
