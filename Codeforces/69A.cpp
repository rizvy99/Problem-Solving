#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,sum1=0,sum2=0;
    cin>>n;
    while(n--){
        int x1,x2,x3;
            cin>>x1>>x2>>x3;
            sum+=x1;
            sum1+=x2;
            sum2+=x3;
    }
     if(sum==0&&sum1==0&&sum2==0){
    cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
