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
        ll x,n,ans=0;
        cin>>x>>n;
        for(ll i=1;i<=x;i++){
            if(x%i==0 && x/i>=n){
                ans=i;
            }
            if(x/i<n){
                break;
            }
        }
        cout<<ans<<el;
     
    }
    return 0;
}