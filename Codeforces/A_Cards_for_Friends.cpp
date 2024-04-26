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
    ll t;
    cin>>t;
    while(t--){
        ll ans = 1, w = 0, h = 0, n = 0;
        cin>>w>>h>>n;
        while (true){
            if (w%2==0){
                w/=2;
                ans*=2;
            } else if (h%2==0){
                h/=2;
                ans*=2;
            } else{
                break;
            }
        }
        if (n<=ans){
            cout<<"YES"<<el;
        } else{
            cout<<"NO"<<el;
        }
    }
    return 0;
}