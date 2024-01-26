#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[100],i;
    for(  i=0;i<100;i++){
        cin>>ar[i];
        if(ar[i]<=0){
            ar[i]=1;
        }
     }
    for(int i=0;i<10;i++){
           cout<<"X["<<i<<"] = "<<ar[i]<<endl;
    }

    return 0;
}




