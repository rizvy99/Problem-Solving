#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int ar[n];
        cin>>ar[i];
        if(ar[i]>0){
              sum+=ar[i];
        }else{
            if(sum<1){count++;}
            else{sum--;}
        }
    }
    cout<<count;
}
