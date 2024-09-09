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
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        string sr="ABCDEFG";
        int ans=0;
        for(auto u:sr){
            if(mp[u]<m){
                ans+=m-mp[u];
            }
        }
        cout<<ans<<el;
    }
    return 0;
}