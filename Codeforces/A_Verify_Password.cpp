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
        int n;
        cin>>n;
        string s,s1;
        cin>>s;
        s1=s;
        sort(s.begin(),s.end());
        //cout<<s<<el;
        if(s1==s){cout<<"YES"<<el;}
        else{cout<<"NO"<<el;}
     
    }
    return 0;
}