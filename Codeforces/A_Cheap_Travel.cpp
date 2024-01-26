#include<bits/stdc++.h>
#define ll long long int
#define nn "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m,a,b,sum,count=0;
    cin>>n>>m>>a>>b;
     if(m*a>b){
        sum=(n%m)*a;
        if(sum>b){
            cout<<(n/m)*b+b<<nn;
        }
        else{
            cout<<(n/m)*b+sum<<nn;
        }

     }
     else{
        cout<<n*a<<nn;
     }
    return 0;
}