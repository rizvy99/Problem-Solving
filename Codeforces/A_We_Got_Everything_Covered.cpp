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
        ll n,k;
        cin>>n>>k;
        string s,ans;
        char ch='a';
        while(k--){
            s+=ch;
            ch++;
        }
        while(n--)
            ans+=s;
            cout<<ans<<el;     
    }
    return 0;
}