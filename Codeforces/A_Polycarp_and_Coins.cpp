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
        ll n,div=0,mul=0,x=0;
        cin>>n;
        div = n/3;
        mul = div*2;
        x = n-mul;
        if(abs(x-div)==1 || abs(x-div)==0){
            cout<<x<<" "<<div<<el;
        }else{
            cout<<min(x,div)<<" "<<max(x,div)-1<<el;            
        }
     
    }
    return 0;
}