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
        int n,x,p;
        cin>>n>>x>>p;
        int x1 = abs(x);
        int ans = x1/p;
        if(x1%p!=0){
            ans++;
        }
        if(ans>n){
            cout<<-1<<el;    
        }
        else{
            cout<<ans<<el;
        }
    }
    return 0;
}