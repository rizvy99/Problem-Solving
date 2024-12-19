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
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        if(mp.size()>=3){cout<<"No"<<el;}
        else{
            if(abs((*mp.begin()).second-(*mp.rbegin()).second)<=1){
                cout<<"Yes"<<el;
            }else{
                cout<<"No"<<el;
            }
        }
    }
    return 0;
}