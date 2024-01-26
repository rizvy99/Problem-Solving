#include<bits/stdc++.h>
using namespace std;
int main()
{
    string t,s;
    cin>>t>>s;
     reverse(s.begin(),s.end());
     if(t==s){
        cout<<"YES"<<endl;
     }else{
         cout<<"NO"<<endl;
     }
    return 0;
}
