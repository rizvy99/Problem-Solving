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
        ll l,r;
        cin >>l>>r;
        int cnt = 0;
        for (int i =l;i<=r;i++) {
            int last = i % 10;
            if (last == 2 || last == 3 || last == 9) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
