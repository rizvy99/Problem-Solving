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
    map<string,int>mp;
    while(t--){
        string s;
        cin>>s;
        if(mp[s]==0){cout<<"OK"<<el;}
        else{cout<<s<<mp[s]<<el;}
        mp[s]++;
     
    }
    return 0;
}