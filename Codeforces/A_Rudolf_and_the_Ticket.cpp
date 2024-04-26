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
        int n,m,k,cnt=0;
        cin>>n>>m>>k;
        int ar[n],ar1[m];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int j=0;j<m;j++){
            cin>>ar1[j];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ar[i]+ar1[j]<=k){
                    cnt++;
                }
            }
        }
        cout<<cnt<<el;
     
    }
    return 0;
}