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
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n],sum=0,sum1=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]%2==0){
                sum+=ar[i];
            }else{
                sum1+=ar[i];
            }
        }
        if(sum>sum1){cout<<"YES"<<el;}
        else{cout<<"NO"<<el;}
     
    }
    return 0;
}