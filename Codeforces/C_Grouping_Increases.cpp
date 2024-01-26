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
     ll n,m;
     int cnt=0,cnt1=0;
     cin>>n;
     ll ar[n];
     for(int i=0;i<n;i++){
        cin>>ar[i];
     }
     if(n>4){
     m=(n/2)+1;
     for(int i=1;i<m;i++){
        if(ar[i]>ar[i-1]){
            cnt++;
        }
        else{
            continue;
        }
     }
     for(int i=m+1;i<n;i++){
        if(ar[i]>ar[i-1]){
            cnt1++;
        }
        else{
            continue;
        }
     }
     int penalty=cnt+cnt1;
     cout<<penalty<<el;
     }
     else{
     for(int i=0;i<n;i++){
        if(ar[i]>ar[i-1]){
            cnt++;
        }
        else{
            continue;
        }
     }
     cout<<cnt<<el;
     }
     }
    return 0;
}