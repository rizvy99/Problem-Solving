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
        int n;
        cin>>n;
        string s;
        cin>>s;
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        vector<char> v;
        v.reserve(s.size());
        v.push_back(s[0]);
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                v.push_back(s[i]);
            }
        }
        string s1(v.begin(), v.end());
        
        string s2 = "meow";
        if(s1==s2){
            cout<<"YES"<<el;
        }else{
            cout<<"NO"<<el;
        }
     
    }
    return 0;
}