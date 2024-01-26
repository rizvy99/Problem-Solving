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
     ll n,x,y,sum;
     cin>>n;
     if(n>=0){
        cout<<n<<el;
     }
     else if(n<0&&n>=-10){
        cout<<"0"<<el;
     }
     else{
        x=n/10;
        y=(n/100)*10+n%10;
        sum=max(x,y);
        cout<<sum<<el;
     }
    return 0;
}