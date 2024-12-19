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
        int n,k,ans=0;
        cin>>n>>k;
        vector<int>v(k);
        for(int i=0;i<k;i++){
            int b,c;
            cin>>b>>c;
            v[b-1]+=c;
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<min(n,k);i++){
            ans+=v[i];
        }
        cout<<ans<<el;
     
    }
    return 0;
}