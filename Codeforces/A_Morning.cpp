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
        cin>>s;
        int a=s[0]-'0';
        int b=s[1]-'0';
        int c=s[2]-'0';
        int d=s[3]-'0';
        if(a==0)a=10;
        if(b==0)b=10;
        if(c==0)c=10;
        if(d==0)d=10;
        int ans=abs(a-1)+abs(b-a)+abs(c-b)+abs(d-c);
        cout<<ans+4<<el;
        
     
    }
    return 0;
}