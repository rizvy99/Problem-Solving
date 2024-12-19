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
        int n,min1=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            min1 = max(v[0],v[1]);
        }
        for(int i=0;i<n-1;i++){
            min1 = min(min1,max(v[i],v[i+1]));
        }
        cout<<min1-1<<el;

     
    }
    return 0;
}