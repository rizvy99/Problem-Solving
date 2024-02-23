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
        ll a,b;
        int cnt=0,sub =0;
        cin>>a>>b;
        if(a==b){cout<<"0"<<el;continue;}
        if(a>b){
            sub = a-b;
            cnt++;
            if(sub%2!=0){
                cnt++;
            }
        }
        if(a<b){
            sub = b-a;
            cnt++;
            if(sub%2!=1){
                cnt++;
            }
        }
        cout<<cnt<<el;
        
    }
    return 0;
}