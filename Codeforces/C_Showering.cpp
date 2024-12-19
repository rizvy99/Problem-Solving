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
        int n,s,m;
        cin>>n>>s>>m;
        int cnt=0,time,diff=0;
        for(int i=0;i<n;i++){
            int l,r;
            cin>>l>>r;
            time =(l-cnt);
            cnt=r;
            diff=max(diff,time);
        }
        time =m-cnt;
        diff=max(diff,time);
        if(diff>=s){cout<<"YES"<<el;}
        else{
            cout<<"NO"<<el;
        }
     
    }
    return 0;
}