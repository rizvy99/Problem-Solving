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
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b&&b<c){cout<<"STAIR"<<el;}
        else if(a<b&&b>c){cout<<"PEAK"<<el;}
        else{
            cout<<"NONE"<<el;
        }
     
    }
    return 0;
}