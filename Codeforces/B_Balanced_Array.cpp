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
    while(t--)
    {
        ll n,sum=0,sum1=0;
        cin>>n;

        if(n%4!=0){
            cout<<"NO"<<el;
        }
        else{
            cout<<"YES"<<el;
            for(int i=2; i<=n; i+=2){
                cout<<i<<" ";
                sum+=i;
            }
            for(int i=1; i<n-2; i+=2){
                cout<<i<<" ";
                sum1+=i;
            }
            cout<<sum-sum1<<el;
        }
    }
}