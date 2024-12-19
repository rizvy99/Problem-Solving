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
        int n,cnt=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
             if(s[i]=='U'){cnt++;}
              
        }
        if(cnt%2==1){cout<<"YES"<<el;}
        else{cout<<"NO"<<el;}
            
    }
    return 0;
}