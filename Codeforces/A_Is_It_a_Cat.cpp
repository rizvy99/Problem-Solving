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
        int cnt1=n;
        transform(s.begin(), s.end(), s.begin(), ::toupper); 
        if(n<4){cout<<"NO"<<el;}
        else{
        for(int i=0;i<n;i++){
            if((s[0]=='M'&&s[i]=='M')||s[i]=='E'||s[i]=='O'||s[n-1]=='W'){
               cnt1--;
            } 
        }
        if(cnt1==0){cout<<"YES"<<el;}
        else{cout<<"NO"<<el;}
        }
     
    }
    return 0;
}