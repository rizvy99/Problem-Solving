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
    string s,t;
    cin>>s>>t;
    int cnt = 0;
    for (int i = 0; i < t.size(); ++i)
    {
        if (t[i] == s[cnt])
        {
            cnt++;
        }
    }
    cout<<cnt+1<<el;
    return 0;
}