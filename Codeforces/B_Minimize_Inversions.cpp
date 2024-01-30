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
        ll n;
        cin>>n;
        vector<int>ar(n+1),ar1(n+1);
        for(int i=0;i<n+n;i++){
            cin>>(i<n?ar[i]:ar1[ar[i-n]]);
        }
        sort(ar.begin(),ar.end());
        for(auto it:ar){
            if(it==0){
                continue;
            }
            cout<<it<<" ";
        }
        cout<<el;
        for(auto it:ar1){
            if(it==0){
                continue;
            }
            cout<<it<<" ";
        }
        cout<<el;
     
    }
    return 0;
}