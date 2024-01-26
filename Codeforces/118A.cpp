#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,d;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='y'||s[i]=='Y'){
            continue;
        }
        else{
                   d+=".";
                   d+=tolower(s[i]);
        }
    }
    cout<<d<<endl;

    return 0;

}
