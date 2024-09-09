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
        for(char c='a';c<='h';c++){
            if(c!=s[0]){
                cout<<c<<s[1]<<el;
            }
        }
        for(char c='1';c<='8';c++){
            if(c!=s[1]){
                cout<<s[0]<<c<<el;
            }
        }
     
    }
    return 0;
}