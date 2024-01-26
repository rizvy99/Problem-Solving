#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,x;
         int count=0;
         cin>>n;
         for(x=2;x<=n;x++){
            if(n%x==0){
                if(x%2!=0){
                    count++;
                }
            }
            //if(count>2){break;}
         }
         if(count==1){
            cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;
         }
    }
    return 0;
}

