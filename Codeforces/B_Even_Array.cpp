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
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n],cnt = 0,cnt1 = 0;
        for(int i=0; i<n; i++){
            cin>>ar[i];
        }
        for(int i=0; i<n; i++){
            if(i%2 != ar[i] % 2){
                if(ar[i] % 2 != 0){
                    cnt++;
                }
                else{
                    cnt1++;
                }
            }
        }
        if(cnt != cnt1){
            cout<<"-1"<<el;
        }
        else{
            cout<<cnt1<<el;
        }
    }
    return 0;
}
