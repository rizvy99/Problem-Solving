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
     ll n,x=0;
     cin>>n;
     for(int i=3;i<=n;i+=2){
        if(n%i==0){
            x++;
            break;
        }
     }
     if(x>0){
        cout<<"YES"<<el;
     }
     else{
        cout<<"NO"<<el;
     }
          
    }
    return 0;
}