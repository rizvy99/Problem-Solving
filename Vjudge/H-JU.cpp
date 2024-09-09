#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define srt(a) sort(a.begin(),a.end())
#define rev(a) reverse(a.begin(),a.end())
const int NMAX = 2e5+5;

int main(){
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    ll t=1;
    //cin>>t;
    while(t--){
      string s;
      cin>>s;
      string ans="AWHO";
      while(ans.size()<=s.size())ans.push_back('O');
      cout<<ans;
      
    }
    return 0;
}