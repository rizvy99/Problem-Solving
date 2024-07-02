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
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    s.erase(remove(s.begin(),s.end(),'a'),s.end());
    s.erase(remove(s.begin(),s.end(),'e'),s.end());
    s.erase(remove(s.begin(),s.end(),'i'),s.end());
    s.erase(remove(s.begin(),s.end(),'o'),s.end());
    s.erase(remove(s.begin(),s.end(),'u'),s.end());
    s.erase(remove(s.begin(),s.end(),'y'),s.end());

    for(int i=0;i<s.size();i++){
        cout<<'.'<<s[i];
    }
     
    return 0;
}