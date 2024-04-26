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
    for(int i=1;i<=t;i++){
        int x,y;
        cin >> x >> y;
        int ans = (x * y + 1) / 2;

        cout << "Case " << i << ": " << ans << el;
    }
    return 0;
}