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
        ll n,k,cnt=0;
        cin>>n>>k;
        ll ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]>k){
                cnt++;
            }
        }cout<<cnt<<el;
     
    }
    return 0;
}