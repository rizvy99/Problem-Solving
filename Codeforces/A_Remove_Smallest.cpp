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
        int n;
        cin>>n;
        int ar[n],cnt=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        for(int i=1;i<n;i++){
            if(abs(ar[i]-ar[i-1])>1){
                cnt++;
                break;
            }else{
                continue;
            }
        }
        if(cnt>0){
            cout<<"NO"<<el;
        }else{
            cout<<"YES"<<el;
        }
    }
    return 0;
}