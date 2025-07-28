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
        int cnt=0;
        for(int i=0;i<n-1;i++){
            int mx =max(v[i],v[i+1]);
            int mn = min(v[i],v[i+1]);
            if(2*mn >mx){
                cnt++;
                break;
            }
        }
        if(cnt>0){
            cout<<"YES"<<el;
        }else{
            cout<<"NO"<<el;
        }
     
    }
    return 0;
}