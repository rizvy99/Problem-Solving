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
        if(n==1){cout<<"2"<<el;}
        else if(n%3==0){cout<<n/3<<el;}
        else{cout<<(n/3)+1<<el;}
    }
    return 0;
}