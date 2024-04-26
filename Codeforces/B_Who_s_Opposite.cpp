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
        ll a,b,c,d;
        cin>>a>>b>>c;
        int sub = abs(a-b);
        int val = sub*2;

        if(a>val || b>val || c>val){
            cout<<-1<<el;
        }
        else{
            d = c + sub;
            if(d>val){
                d = c - sub;
            }
            cout<<d<<el;
        }
     
    }
    return 0;
}