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
        int n,negi=0,zero=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]<0){negi++;}
            else if(v[i]==0){
                zero++;
            }
        }
        if(zero>0 || negi %2!=0){
            cout<<0<<el;
        }else{
            cout<<1<<el<<1<<" "<<0<<el;
        }
     
    }
    return 0;
}