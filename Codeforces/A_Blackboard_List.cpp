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
        int mx=INT_MIN,mn=INT_MAX;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            mn=min(mn,x);
            mx=max(mx,x);
        }
        if(mn<0){cout<<mn<<el;}
        else{
            cout<<mx<<el;
        }
     
    }
    return 0;
}

