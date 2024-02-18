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
    ll t;
    cin>>t;
    while(t--){
        int n,cnt=0,cnt1=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                cnt=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='B'){
                cnt1=i;
                break;
            }
        }
        cout<<cnt1-cnt+1<<el;
     
    }
    return 0;
}