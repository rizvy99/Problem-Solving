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
    int t,cnt=0;
    cin>>t;
    string s;
    cin>>s;
    for(int i=0;i<t;i++){
        if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x'){
            cnt++;
        }
    } 
    cout<<cnt<<el;

    return 0;

}
