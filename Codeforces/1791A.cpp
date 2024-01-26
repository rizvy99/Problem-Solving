#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
     string s="codeforces";
    cin>>t;
    for(int i=0;i<t;i++){
     char c;
     cin>>c;
     if(s.find(c) !=string::npos){
        cout<<"YES"<<endl;
     }else{cout<<"NO"<<endl;}
    }
    return 0;
}




