#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,sum=0;
    cin>>a>>n;
    while(n<=0){cin>>n;}
    int b=a+n;
    for(int i=a;i<b;i++){
        sum+=i;
    }
        cout<<sum<<endl;
return 0;
}
