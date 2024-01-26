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
     ll n;
     cin>>n;
     ll count=0,count1=0;
     while(!(n%2)){
        n/=2;
        count++;
     }
     while(!(n%3)){
        n/=3;
        count1++;
     }
     if(n!=1||count>count1){
        cout<<"-1"<<el;
     }else{
        cout<<(count1-count)+count1<<el;
     }
    }
    return 0;
}