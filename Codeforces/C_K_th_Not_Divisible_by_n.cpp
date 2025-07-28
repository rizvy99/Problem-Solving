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
        ll num=k/(n-1);
        if((num+k)%n==0){
            cout<<num+k-1<<el;
        }else{
            cout<<num+k<<el;
        }
     
    }
    return 0;
}