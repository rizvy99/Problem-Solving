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
        ll n,k,mul=1;
        cin>>n>>k;
        vector<int>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
            mul*=v[i];
        }
        if(2023%mul==0){
            cout<<"YES"<<el;
            cout<<2023/mul<<" ";
            for(ll i=1;i<k;i++){
                cout<<1<<" ";
            }cout<<el;
        }else{cout<<"NO"<<el;}
     
    }
    return 0;
}