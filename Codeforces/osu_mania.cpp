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
    cin>>t;
    while(t--){
        int n;
        cin>>n;
         map<int, int> mp; 
        vector<string> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < 4; j++) {
                if (v[i][j] == '#') {
                    mp[n - i] = j + 1;
                    break;
                }
            }
        }

         for (int i = 1; i <= n; i++) {
            cout << mp[i] << " ";
        }
        cout << el;
    }

    return 0;
}