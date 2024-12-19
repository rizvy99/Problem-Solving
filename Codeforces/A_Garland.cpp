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
        vector<int>v(12);
        for(auto u:s){
            ++v[u-'0'];
        }
        int cnt = *max_element(v.begin(),v.end());
        if(cnt ==4){cout<<-1<<el;}
        else if(cnt==3){cout<<6<<el;}
        else{cout<<4<<el;}
     
    }
    return 0;
}