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
        ll ar[n],ar1[n],min_a=INT_MAX,min_b=INT_MAX;
        for(int i = 0;i<n;i++){
            cin>>ar[i];
            min_a=min(min_a,ar[i]);
        }
        //sort(ar,ar+n);
        for(int i = 0;i<n;i++){
            cin>>ar1[i];
            min_b=min(min_b,ar1[i]);
        }
        //sort(ar1,ar1+n);
        ll ans = 0;
        for(int i=0;i<n;i++){
            ans+=max(ar[i]-min_a,ar1[i]-min_b);
        }
        cout<<ans<<el;
        
    }
    return 0;
}