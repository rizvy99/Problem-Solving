#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sumcount=0 ;
    cin>>a>>b;
   /* if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }*/
    for(int i=b+1;i<a;i++){
        if( i%2!=0){
              sumcount+=i;
        }
    }
    cout<<sumcount;
}
