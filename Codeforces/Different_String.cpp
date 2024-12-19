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
        int n=s.size(),cnt=0;
        string reversed = s;
        reverse(reversed.begin(), reversed.end());
        if(s==reversed){
            cout<<"NO"<<el;
        }else{
            cout<<"YES"<<el<<reversed<<el;
        }
    }
    return 0;
}