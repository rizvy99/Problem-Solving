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
     int a,b,n,count=0;
     cin>>a>>b>>n;
    while(a<=n&&b<=n){
        if(a>b){
            b+=a;
            count++;
        }else{
            a+=b;
            count++;
        }
    } 
    cout<<count<<el;
    }
    return 0;
}