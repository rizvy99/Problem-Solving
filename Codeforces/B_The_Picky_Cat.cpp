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
        vector<int>v1(n);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        vector<pair<int,int>>p;
        for(int i=0;i<n;i++){
            p.push_back({abs(v1[i]),i});
        }
        sort(p.begin(),p.end());
        vector<int>ans(n,0);
        for(int i=0;i<=n/2;i++){
            int index = p[i].second;
            ans[index] = 1;
        }
        if(ans[0]==1)
        {cout<<"YES"<<el;}
        else{
            cout<<"NO"<<el;
        }
    }
    return 0;
}