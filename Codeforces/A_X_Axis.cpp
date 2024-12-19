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
         int ar[4];
         for(int i=0;i<3;i++){
            cin>>ar[i];
         }
         sort(ar,ar+3);
         int ans=0;
        for(int i=0;i<3;i++){
            ans = abs(ar[0]-ar[1])+abs(ar[2]-ar[1]);
        }
        cout<<ans<<el;
     
    }
    return 0;
}