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
        if(!is_sorted(v.begin(),v.end())){
            cout<<0<<el;
            continue;
        }
        int diff=INT_MAX;
        for(int i=0;i<n-1;i++){
            diff = min(diff,(v[i+1]-v[i]));
            
        }
        cout<<diff/2 +1<<el;
     
    }
    return 0;
}