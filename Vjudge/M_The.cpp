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
    ll t;
    cin>>t;
    while(t--){
        int cnt=0;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='4'){
                cnt++;
            }
        }
        cout<<cnt<<el;
    }
    return 0;
}