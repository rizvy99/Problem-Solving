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
    while(t--) {
        int n;
        cin >> n;
        string ar[n];
        for(int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        int cnt = 0, cnt1 = 0;
        bool tri = false;
        for(int i = 0; i < n; i++) {
            cnt = 0;
            for(int j = 0; j < n; j++) {
                if(ar[i][j] == '1') {
                    cnt ++;
                }
            }
            if(cnt != 0) {
                if(cnt != cnt1 && cnt1 != 0) {
                    cout << "TRIANGLE" << el;
                    tri = true;
                    break;
                } else {
                    cnt1 = cnt;
                }
            }
        }
        if(!tri)
            cout << "SQUARE" << el;
    }
    return 0;
}
