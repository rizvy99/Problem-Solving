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
    int n,m;
    cin>>n>>m;
    int ar[n],cnt=0,sum=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    for(int i=0;i<n;i++){
        if(ar[i]<0 && cnt<m){
            sum-=ar[i];
            cnt++;
        }
    }
    cout<<sum<<el;
    
    return 0;
}