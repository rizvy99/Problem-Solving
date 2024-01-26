#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,s;
    cin>>t;
    while(t--){
        int count=0;

        cin>>n;
        if(n%10!=0){
            cout<<n%10<<" ";
            count++;
        }
          s=n%10;
        n-=s;
          if(n%100!=0){
            cout<<n%100<<" ";
            count++;
        }
           s=n%100;
        n-=s;
          if(n%1000!=0){
            cout<<n%1000<<" ";
            count++;
        }
           s=n%100;
        n-=s;
          if(n%10000!=0){
            cout<<n%10000<<" ";
            count++;
        }
         cout<<endl;


    }
    cout<<endl;

}
