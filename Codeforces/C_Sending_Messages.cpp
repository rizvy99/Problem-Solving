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
     ll n,f,a,b;
     cin>>n>>f>>a>>b;
     ll ar[n];
     for(int i=0;i<n;i++){
        cin>>ar[i];
     }
     ll pre=0,mn=0;
     for(int i=0;i<n;i++){
     mn=min(b,abs(ar[i]-pre)*a);
     f-=mn;
     pre=ar[i];
    }
    if(f>0){
        cout<<"YES"<<el;
    }
    else{
        cout<<"NO"<<el;
    }
    }
    return 0;
}