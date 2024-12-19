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
        string s;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        for(int i=1;i<=12;i++){
            if(i==a||i==b){s+="a";}
            if(i==c||i==d){s+="b";}
        }
        if(s=="abab"||s=="baba"){cout<<"YES"<<el;}
        else{cout<<"NO"<<el;}
     
    }
    return 0;
}