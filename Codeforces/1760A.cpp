#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b){swap(a,b);}
        if(b>c){swap(b,c);}
        if(a>b){swap(a,b);}
        cout<<b<<endl;

     }
}

