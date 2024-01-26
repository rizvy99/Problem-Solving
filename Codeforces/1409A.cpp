#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cal=0;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        int deff=abs(a-b);
        int cal=deff/10;
        if(deff%10!=0){
            cal++;
             //cout<<cal;
        }
         cout<<cal<<endl;
    }
}

