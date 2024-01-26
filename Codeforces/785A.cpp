#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0,c=0,d=0,e=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s[0]=='T'){
            a+=4;
        }
        else if(s[0]=='C'){
            b+=6;
        }
        else if(s[0]=='O'){
            c+=8;
        }
        else if(s[0]=='D'){
            d+=12;
        }
        else if(s[0]=='I'){
            e+=20;
        }
    }
    cout<<a+b+c+d+e<<endl;
     return 0;
}

