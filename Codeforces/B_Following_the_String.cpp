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
        ll n;
        cin>>n;
        string s;
        vector<int>cnt(26,-1),ar(n);
        for(int i=0;i<n;i++){
            cin>>ar[i];
            for(char ch='z';ch>='a';ch--){
                if(cnt[ch-'a']==ar[i]-1){
                    cnt[ch-'a']++;
                    s+=ch;
                    break;
                }
            }
        }
        cout<<s<<el;
    }
}