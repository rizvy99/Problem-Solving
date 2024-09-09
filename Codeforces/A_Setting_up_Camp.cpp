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
        if(a>=1 && b>=2 && c>=3){
        int d=(3-b)%3;
        int ans = a+(b+d)/3 + (c-d+2)/3;
        cout<<ans<<el;
        }
        else{
            cout<<-1<<el;
        }
     
    }
    return 0;
}