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
        int x[4], y[4];
        for (int i=0;i<4;i++) {
           cin>>x[i]>>y[i];
        }
        sort(x,x+4);
        sort(y,y+4);
        int n =max(x[3]-x[0],y[3]-y[0]);
        int area=n*n;
         cout<<area<<el;
    }

    return 0;
}
