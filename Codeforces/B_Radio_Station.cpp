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
    int n,m;
    cin>>n>>m;
    map<string, string>mp;
    while(n--){
        string s,s1;
        cin>>s>>s1;
        mp[s1]=s;
    }
    while(m--){
        string s2,s1;
        cin>>s2>>s1;
        s1.pop_back();
        cout<<s2<<" "<<s1<<"; #"<<mp[s1]<<el;
    }
    return 0;
}