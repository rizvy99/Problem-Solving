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
        ll n,ans=-1;
        cin>>n;
        ll ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        for(int i=0;i<n-2;i++){
            if(ar[i]==ar[i+1] && ar[i]==ar[i+2]){
                ans=ar[i];
                break;
            }
        }
        cout<<ans<<el;
    }
    return 0;
}