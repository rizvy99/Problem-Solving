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
        ll a,b,l;
        cin>>a>>b>>l;
        ll ta=a,tb=b;
        ll x=1,y=1;
        while(a<l){
            if(l%a==0){x++;}
            else{
                break;
                a=a*ta;
            }
        }
        while(b<l){
            if(l%b==0){y++;}
            else{
                break;
                b=b*tb;
            }
        }
        set<ll>s;
        for(int i=0;i<=x;i++){
            for(int j=0;j<=y;j++){
                ll temp = pow(ta,i)*pow(tb,j);
                if(temp<=l && l%temp==0){
                    s.insert(l/temp);
                }
            }
        }
     
    }
    return 0;
}