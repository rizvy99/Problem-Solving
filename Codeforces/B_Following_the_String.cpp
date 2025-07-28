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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>cnt(26,0);
        string s=" ";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 26; j++) {
                if (cnt[j] == v[i]) {
                    cnt[j]++;   
                    s += char(97 + j);   
                    break;
                }
            }
        }
        cout<<s<<el;
         
    }
}