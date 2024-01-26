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
     ll n,x,cnt=0;
     cin>>n;
     //int cnt=0;
     if(n<=9){
        cout<<n<<el;
     }
     else{
     for(int i=1;i<=9;i++){
        x=i;
     
        while(x<=n){
            
            cnt++;
            x=x*10+i;
            }
     }
     cout<<cnt<<el;
     }
     
    }
    return 0;
}