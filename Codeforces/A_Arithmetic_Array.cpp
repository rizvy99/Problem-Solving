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
        int n,cnt=0;
        cin>>n;
        ll ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(abs(ar[i])==1){continue;}
            else{
                cnt+=abs(ar[i])-1;
            }
        }
        cout<<cnt<<el;
    }
    return 0;
}