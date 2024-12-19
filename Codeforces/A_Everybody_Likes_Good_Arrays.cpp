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
        int ans = 0,cnt=0;
        for(int i=0;i<n;i++){
            cnt++;
            if(i==n-1 || v[i]%2 != v[i+1]%2){
                ans+=(cnt-1);
                cnt=0;
            }
        }
        cout<<ans<<el;
     
    }
    return 0;
}