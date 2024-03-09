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
    int sum = 0;
    char firstp = 'a';
    for(int i=0 ; i<s.size() ; i++){
        int n = min(abs(firstp-s[i]),26-abs(s[i]-firstp));
        firstp = s[i];
        sum+=n;
    }
    cout<<sum<<el;

    return 0;
}