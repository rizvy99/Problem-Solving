#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
      //string s;
      cin>>s;
      if(s[1]=='+'){
        a++;
      }else{
          a--;
      }
    }
    cout<<a<<endl;
    return 0;
}
