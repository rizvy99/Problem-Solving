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
        ll l, r;
        cin >> l >> r;
        ll cnt = 0,sum=0;
        for (ll i =1;i<=r;i++) {
            sum += (i - 1);  
            if (l + sum <= r){
                cnt++;
            }else{
                break;
            }
             
        }

        cout << cnt <<el;
     
    }
    return 0;
}