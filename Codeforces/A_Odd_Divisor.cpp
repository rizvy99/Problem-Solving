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
        //int cnt=0;
        cin>>n;
        if(n%2!=0){
            cout<<"YES"<<el;
        }else{
            int count=0;
            while(n>=1){
                n=n/2;
                if(n%2!=0&&n!=1){
                    count++;
                    break;
                } 
            }
            if(count>0){
                cout<<"YES"<<el;
            }else{
                cout<<"NO"<<el;
            }
        }
    }
    return 0;
}