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
    int cnt=0,n=1;
    cin>>t;
    ll ar[t];
    for(int i=0;i<t;i++){
        cin>>ar[i];
    }
    //int n=1;
    for(int i=0;i<t;i++){
        if(ar[i]>=ar[i-1]){
            cnt++;
            n=max(n,cnt);
        }
        else{
            cnt=1;
        }
    }
    cout<<n<<el;
    return 0;
}