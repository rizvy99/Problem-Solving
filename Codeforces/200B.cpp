#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,k,sum;
    cin>>n;
 for(int i=0;i<n;i++){
        cin>>k;
     sum+=k;
 }
  double div=sum/n;
 cout<<fixed<<setprecision(12)<<div<<endl;

     return 0;
}

