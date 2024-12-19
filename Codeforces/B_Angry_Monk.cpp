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
        ll n,k,cnt=0,cnt1=0,cnt2=0;
        cin>>n>>k;
        vector<ll>v(k);
        for(int i=0;i<k;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(auto u : v){
            if(u==2){cnt2++;}
            else if(u==1){cnt++;}
            else{cnt1++;}
        }
        ll ans = 0;
        if(v[k-1]==1){cout<<k-1<<el;}
        for(int i=0;i<k-1;i++){
            if(v[i]==1){
                continue;
            }
            cnt+=v[i];
            ans+=v[i]-1;
        }
        ans+=cnt;
        cout<<ans<<el;
    }

    return 0;
}


     
  