#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[50],n,k,count=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
           cin>>ar[i];
        }
    for(int i=0;i<n;i++){
        if(ar[i]>=ar[k-1]&&ar[i]>0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
