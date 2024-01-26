#include <bits/stdc++.h>
using namespace std;
  int main()
  {
      int count=0;
      string s;
      cin>>s;
      for(int i=0;i<s.size();i++){
            if(s[i]=='4'||s[i]=='7'){
                count++;
            }
      }
      if(count==4 ||count==7){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    return 0;
}

