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
        int ar[n],max=99,min=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(max>ar[i]){
                max=ar[i];
            }
            if(min<ar[i]){
                min=ar[i];
            }
        }
        int ans = abs(max-min)*2;
        cout<<ans<<el;
     
    }
    return 0;
}