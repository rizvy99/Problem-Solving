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
        ll n,cnt=0,cnt1=0;
        cin>>n;
        ll ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]%2==0){
                cnt++;
            }else{
                cnt1++;
            }
        }
        cout<<min(cnt,cnt1)<<el;
    }
    return 0;
}