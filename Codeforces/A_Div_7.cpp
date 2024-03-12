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
        ll n;
        cin>>n;
        if(n%7==0){cout<<n<<el;}
        else if(((n%10)+(7-(n%7)))<10){
            n+=(7-(n%7));
            cout<<n<<el;
        }else{
            n-=(n%7);
            cout<<n<<el;
        }
    }
    return 0;
}