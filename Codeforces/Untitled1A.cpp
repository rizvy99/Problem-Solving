#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,d;
    cin>>s;
    cout<<".";
    //d=tolower(s);
    for(int i=1;i<=s.size();i++){
        if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'){
            continue;
        }
        else{
                    cout<<s[i];
        }
    }
    for(int i=0;i<s.size();i++){
         if(i%2==0){
                    cout<<".";
         }
        //cout<<s[i];
    }
}
