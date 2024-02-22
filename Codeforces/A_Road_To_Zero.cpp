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
        ll x,y,a,b,sum=0;
        cin>>x>>y>>a>>b;
        if(x>y){
            swap(x,y);
        }
        sum += a*(y-x);
        if(2*a<b){
            sum+=x*(2*a);
        }else{
            sum+=x*b;
        }
        cout<<sum<<el;
     
    }
    return 0;
}