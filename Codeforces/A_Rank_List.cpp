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
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>v(n);
    for(int i=0 ;i<n;i++){
        cin>>v[i].first>>v[i].second;
        v.push_back(make_pair(-1*v[i].first,v[i].second));
    }
    int cnt=0;
    sort(v.begin(),v.end());
    for(auto u : v){
        if(u==v[k-1])cnt++;
    }
    cout<<cnt<<el;
    return 0;
}