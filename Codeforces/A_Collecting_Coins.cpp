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
        ll a,b,c,n;
        cin>>a>>b>>c>>n;
        ll sum=a+b+c+n;
        if(sum%3!=0){
            cout<<"NO"<<el;
        }else{
            if(a>sum/3 || b>sum/3 || c>sum/3){
                cout<<"NO"<<el;
            }else{
                cout<<"YES"<<el;
            }
        }
     
    }
    return 0;
}