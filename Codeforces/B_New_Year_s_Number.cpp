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
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll x=n/2020;
        ll y = n%2020;
        if(n<2020){
            cout<<"NO"<<el;
        }else{
            if(x>=y){
            cout<<"YES"<<el;
            }else{
            cout<<"NO"<<el;
            }
        }
    }
    return 0;
}