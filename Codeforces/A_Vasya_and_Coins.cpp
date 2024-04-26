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
        ll a, b ;
        cin>>a>>b;
        if(a==0){
            cout<<1<<el;
        }else{
            int cal = a*1+b*2;
            cout<<cal+1<<el;
        }

     
    }
    return 0;
}