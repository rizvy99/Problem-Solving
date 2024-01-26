#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
   while(t--){
      string s;
      cin>>s;
      if(s.size()%2!=0){
        cout<<"NO"<<endl;
      }
      else{
        int midpoint = s.size() / 2;
     string firstHalf = s.substr(0, midpoint);
     string secondHalf = s.substr(midpoint);
     if(firstHalf==secondHalf){
        cout<<"YES"<<endl;
     }else{cout<<"NO"<<endl;}
      }
   }
   return 0;
}

