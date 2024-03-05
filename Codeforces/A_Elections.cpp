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
        ll a,b,c,val;
        cin>>a>>b>>c;
        val = max({a,b,c});
        if(a==b && b==c){
            cout<<1<<" "<<1<<" "<<1<<el;
        }else{
        if(a>b && a>c){
            cout<<"0"<<" "<<(val-b)+1<<" "<<(val-c)+1<<el;
        }
        else if(b>a && b>c){
            cout<<(val-a)+1<<" "<<"0"<<" "<<(val-c)+1<<el;
        }
        else if(c>a && c>b){
            cout<<(val-a)+1<<" "<<(val-b)+1<<" "<<"0"<<el;
        }
        else if(a==val &&b==val){
            cout<<1<<" "<<1<<" "<<val-c+1<<el;
        }
        else if(b==val && c==val){
            cout<<val-a+1<<" "<<1<<" "<<1<<el;
        }
        else if(a==val && c==val){
            cout<<1<<" "<<val-b+1<<" "<<1<<el;
        }
        }
     
    }
    return 0;
}