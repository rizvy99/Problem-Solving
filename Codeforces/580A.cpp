#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,count=0;
    cin>>n>>k;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
         if((a[i]+k<=5)){
            count++;
         }
    }
    int div=count/3;
    cout<<div<<endl;
    return 0;
}

