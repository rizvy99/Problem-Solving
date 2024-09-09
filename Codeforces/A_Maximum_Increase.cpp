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
    ll n;
    cin>>n;
    ll ar[n],cnt=1,cnt1=1;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n-1;i++){
        if(ar[i]<ar[i+1]){
            cnt++;
        }
        else
        {
            if(cnt>cnt1){
                cnt1=cnt;
            }
            cnt=1;
            
        }
        }
        if(cnt>cnt1){
            cout<<cnt<<el;
        }else{
            cout<<cnt1<<el;
        }

        return 0;
}