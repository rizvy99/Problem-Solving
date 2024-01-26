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
    int sum=0,sum1=0;
    while(t--){
     int a,b;
     cin>>a>>b;
     if(a>b){
        sum++;
     }
     else if(b>a){
        sum1++;
     }
    }
    if(sum>sum1){
        cout<<"Mishka"<<el;
    }
    else if(sum<sum1){
        cout<<"Chris"<<el;
    }else{
        cout<<"Friendship is magic!^^"<<el;
    }
    return 0;
}