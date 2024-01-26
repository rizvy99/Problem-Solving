#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=b;i++){
        cout<<i<<" "<<endl;
          if(i==a||i%a==0){
            cout<<endl;
         }
    }
    return 0;
}


