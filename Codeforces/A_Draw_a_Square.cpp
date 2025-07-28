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
    int t;
    cin>>t;
    while(t--){
      int m,n,o,p;
      cin>>m>>n>>o>>p;
      if(m==n && n==o && o==p && p==m){
        cout<<"Yes"<<el;
      }else{
        cout<<"No"<<el;
      }
    }
    return 0;
}