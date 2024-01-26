#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sumcount=0;
    cin>>a>>b;
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    for(int i=a+1;i<b;i++){
        if( i%2!=0){
              sumcount+=i;
        }
    }
    cout<<sumcount<<endl;
    return 0;
}
