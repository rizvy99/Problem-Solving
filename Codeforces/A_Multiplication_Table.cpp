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
    ll n,x,count=0;
    cin>>n>>x;
    for(ll i=1;i<=n;i++){
        if(x%i==0 && n>=(x/i)){
            count++;
        }
    }
    cout<<count<<el;
    return 0;
}