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
        if(s[0]<s[2]){cout<<s[0]<<"<"<<s[2]<<el;}
        else if(s[0]>s[2]){cout<<s[0]<<">"<<s[2]<<el;}
        else{cout<<s[0]<<"="<<s[2]<<el;}
     
    }
    return 0;
}