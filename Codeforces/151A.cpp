#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,sum,sum1,sum2;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    sum=(k*l)/nl;
    sum1=c*d;
    sum2=p/np;
      int x=min({sum,sum1,sum2});
    cout<<x/n;
    return 0;
}
