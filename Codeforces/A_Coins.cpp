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
        ll n,k;
        cin>>n>>k;
        ll x = 2+k;
        if(k%2==0 && n%2!=0){
            cout<<"NO"<<el;
        }else{
            cout<<"YES"<<el;
        }
     
    }
    return 0;
}