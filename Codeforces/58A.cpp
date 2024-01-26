#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int a=0,count=0;
    cin>>s;
     const string s1="hello";
    for(int i=0;i<s.size();i++){
        if(s[i]==s1[a]){
            a++;
            count++;
        }
    }
    if(count==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
