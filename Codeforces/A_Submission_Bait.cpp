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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int mx = 0,cnt=0;
        sort(v.rbegin(),v.rend());
        if(n%2!=0){cout<<"YES"<<el;}
        else{
            for(int i=0;i<n;i++){
                if(v[i]>=mx){
                    mx=v[i];
                    cnt++;
                }
                //else{cout<<"YES"<<el;}
            }
            
        }
        if(cnt==n){cout<<"NO"<<el;}
        else{cout<<"YES"<<el;}
     
    }
    return 0;
}