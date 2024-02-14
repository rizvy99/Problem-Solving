#include<bits/stdc++.h>
#define ll long long int
#define nn "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
      string s;
      int n;
      cin>>n;
      cin>>s;
      bool f1=0,f2=0;int cnt=0;
      for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='i'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
                f1=1;
            }
            else{
                f2=1;
            }
            if(f1&&f2){
                cnt++;
                f1=0;
                f2=0;
            }
    
    }
       cout<<cnt<<nn;
     return 0;
}