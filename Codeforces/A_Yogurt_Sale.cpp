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
        int n,a,b,sum=0,sum1=0;
        cin>>n>>a>>b;
         int x = n*a;
        
        if(n%2==0){
            sum = (n/2)*b;
            cout<<min(x,sum)<<el;
        }else{
            sum1 = (n/2)*b + a;
            cout<<min(x,sum1)<<el;
        }
       
     
    }
    return 0;
}