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
    //map<string,int>mp;
     string s,s1,s2;
     cin>>s;  
     for(int i=0;i<s.size();i++){
         if(s[i]=='.'){
            cout<<0;

         }
         else if(s[i]=='-'&& s[i+1]=='.'){
            cout<<1;
            i++;
         } 
         else{
            cout<<2;
            i++;
        
         }
     }
    
    return 0;
}