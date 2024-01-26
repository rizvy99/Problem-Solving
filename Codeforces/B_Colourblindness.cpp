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
     int cnt=0,n;
     cin>>n;
     string s1,s2;
     cin>>s1>>s2;
     for(int i=0;i<n;i++){
        if(s1[i]==s2[i]||s1[i]=='B'&&s2[i]=='G'||s1[i]=='G'&&s2[i]=='B'){
            cnt++;
        }
     }
     if(cnt==n){
        cout<<"YES"<<el;
     }else{
        cout<<"NO"<<el;
     }
    }
    return 0;
}