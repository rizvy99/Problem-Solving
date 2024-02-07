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
    t*=3;
    while(t--){
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        if(s[0]=='?'){
            if(s[1]=='B'&& s[2]=='C'){
                cout<<"A"<<el;
            }
            else if(s[1]=='A'&& s[2]=='C'){
                cout<<"B"<<el;
            }
            else if(s[1]=='A'&& s[2]=='B'){
                cout<<"C"<<el;
            }
        }
    }

    return 0;
}