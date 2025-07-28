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
        vector<vector<int>>v(n,vector<int>(m));
        int mx = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
                mx= max(mx,v[i][j]);
            }
        }
        vector<pair<int ,int>>v1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==mx){
                    v1.emplace_back(i,j);
                }
            }
        }
        bool flag = false;
        for(int k=0;k<n && !flag; k++){
            set<int>s1;
            for(auto &pr : v1){
                if(pr.first!=k){
                    s1.insert(pr.second);
                    if(s1.size()>1)break;
                }
            }
            if(s1.size()<=1){
                flag=true;
            }
        }
        if(flag){
            cout<<mx-1<<el;
        }else{
            cout<<mx<<el;
        }
     
    }
    return 0;
}