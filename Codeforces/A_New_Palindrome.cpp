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
        string s;
        cin>>s;
        int sz = s.size();
        s= s.substr(0,sz/2);
        int n = unique(s.begin(),s.end())-s.begin();
        if(n==1){cout<<"NO"<<el;}
        else{
            cout<<"YES"<<el;
        }}
    return 0;
}