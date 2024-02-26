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
    ll ar[n],sum=0,sum1=0;
    for(int i=0;i<n-1;i++){
        cin>>ar[i];
        sum+=ar[i];
    }
    for(int i=1;i<=n;i++){
        sum1+=i;
    }
    cout<<sum1-sum<<el;
    return 0;
}