#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,z,count=0,sum=0;
    cin>>a>>z;
    while(z<=a){cin>>z;}
    for(int i=a;i<z;i++){
        sum+=i;
        count++;
       if(sum>z)
       break;
    }
    cout<<count<<endl;
    return 0;
}
