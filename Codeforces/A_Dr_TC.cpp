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
        int n,cnt=0;
        cin>>n;
        string s;
        cin>>s;
        for(auto c:s ){
            if(c=='1'){
                cnt++;
            }
        }
        int ans=0;
        for(auto c:s){
            if(c=='1'){
                ans+=cnt-1;
            }else{
                ans+=cnt+1;
            }
        }
        cout<<ans<<el;
    }
    return 0;
}