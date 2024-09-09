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
        vector<int>v(3);
        cin>>v[0]>>v[1]>>v[2];
        int ans = (v[2]+v[1]+v[0])-max(0,(v[2]-v[1]-v[0]));
        if((v[1]+v[2]+v[0])%2==1){
            cout<<-1<<el;
            continue;
        }
        cout<<ans/2<<el;
    }
    return 0;
}