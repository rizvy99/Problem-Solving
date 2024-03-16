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
        int a,b,c,cnt=0;
        cin>>a>>b>>c;
        cnt = ((abs(a-b)+1)/2+c-1)/c;
        cout<<cnt<<el;
     
    }
    return 0;
}