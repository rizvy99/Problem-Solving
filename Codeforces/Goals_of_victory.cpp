#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,sum;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int ar[n];
       sum=0;
        for(int j=0;j<n-1;j++){
            cin>>ar[j];
            sum+=ar[j];
        }
        cout<<-(sum)<<endl;
    }

    return 0;
}
