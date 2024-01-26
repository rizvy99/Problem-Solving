#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,sum=0,sum1=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
        sum1+=sum;
        count++;
      if(sum1>n){
        count--;
        break;
      }

    }
    cout<<count;
}
