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
        int n,cnt=0;
        cin>>n;
        vector<int>v(n);
        map<int,int>mp;
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
            ans=max(ans,mp[v[i]]);
        }
        cout<<n-ans<<el;
    }
        
    return 0;
}