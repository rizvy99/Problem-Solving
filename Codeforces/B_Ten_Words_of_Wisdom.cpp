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
        int n,win=0,cnt=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            ll a,b;
            cin>>a>>b;
            if(a<=10){
                if(b>win){
                    win=b;
                    cnt=i;
                }
            }
        }
        cout<<cnt<<el;
     
    }
    return 0;
}