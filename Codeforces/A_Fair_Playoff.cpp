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
     int a,b,c,d;
     cin>>a>>b>>c>>d;
     int x=max(a,b);
     int y=max(c,d);
     int m=min(a,b);
     int n=min(c,d);
      if(x<n||y<m){
        cout<<"NO"<<el;
     }else{
        cout<<"YES"<<el;
     } 
    }
    return 0;
}