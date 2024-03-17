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
    ll n,cnt=0,cnt1=0,cnt2=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='n'){cnt++;
        }
        if(s[i]=='o'){cnt1++;}
        if(s[i]=='e'){cnt2++;}
    }
    int x = min({cnt,cnt1,cnt2});
    int m = x*3;
    int p = n-m;
    for(int i = 0;i<m/3;i++){
        cout<<1<<" ";
    }
    for(int i = 0;i<p/4;i++){
        cout<<0<<" ";
    }

    return 0;
}