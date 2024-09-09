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
    ll a,b,n;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(i==1){cout<<"one"<<el;}
        if(i==2){cout<<"two"<<el;}
        if(i==3){cout<<"three"<<el;}
        if(i==4){cout<<"four"<<el;}
        if(i==5){cout<<"five"<<el;}
        if(i==6){cout<<"six"<<el;}
        if(i==7){cout<<"seven"<<el;}
        if(i==8){cout<<"eight"<<el;}
        if(i==9){cout<<"nine"<<el;}
        if(i>9 && i%2==0){cout<<"even"<<el;}
        if(i>9 && i%2!=0){cout<<"odd"<<el;}
    }
    return 0;
}