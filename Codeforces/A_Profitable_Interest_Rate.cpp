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
        int a,b;
        cin>>a>>b;
        if(a>b){cout<<a<<el;}
        else{
            int sub = b-a;
            b-=2*sub;
            if(b<0){
                b=0;
            }
            cout<<b<<el;
        
        }
    }
    return 0;
}