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
        int x,y;
        cin>>x>>y;
         if(x<y){
        cout<<x<<" "<<y<<el;}
        else{
            cout<<y<<" "<<x<<el;
        }
     
    }
    return 0;
}