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
     ll a,b,sum;
     cin>>a>>b;
     sum=a+b;
     if(sum%2==0){
        cout<<"Bob"<<el;
     }
     else{
        cout<<"Alice"<<el;
     }
    }
    return 0;
}