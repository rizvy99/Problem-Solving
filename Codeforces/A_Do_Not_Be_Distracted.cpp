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
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     string s;
     cin>>s;
     int cnt=0;
     map<char,int>m;
     for(int i=0;i<s.length();i++){
        m[s[i]]++;
        char c=s[i];
        while (s[i]==c){
            i++;
        }
        i--;
        if(m[c]>1){
            cnt++;
        }
     }
     if(cnt>0){
        cout<<"NO"<<el;
     }
     else{
        cout<<"YES"<<el;
     }
    }
    return 0;
}