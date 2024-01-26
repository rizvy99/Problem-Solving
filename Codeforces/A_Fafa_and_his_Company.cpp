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
    ll n,x;
    int cnt=0;
    cin>>n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            cnt++;
        }
    }
    cout<<cnt<<el; 
    return 0;
}