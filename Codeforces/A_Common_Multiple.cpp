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
        int ar[n];
        for(int i=1;i<=n;i++){
            cin>>ar[i];
        }
        int ans = 0;
        for(int i=1;i<=n;i++){
            int ini=1;
            for(int j=1;j<i;j++){
                if(ar[i]==ar[j]){
                    ini=0;
                    
                }
                //ans+=ini;
            }
            ans+=ini;
        }
        cout<<ans<<el;
    }
    return 0;
}