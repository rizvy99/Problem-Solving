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
        int n,j,k,mx=0;
        cin>>n>>j>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            mx = max(mx,v[i]);
        }
        if(k>1 || v[j-1]==mx){
            cout<<"YES"<<el;
        }else{
            cout<<"NO"<<el;
        }
    }
    return 0;
}