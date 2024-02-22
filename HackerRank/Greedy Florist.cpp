#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ar[n],ar1[k];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    for(int i=0;i<k;i++){
        ar1[i]=0;
    }
    int sum=0,j=0;
   sort(ar, ar + n);
    for(int i=n-1;i>=0;i--){
        sum+=(ar1[j]+1)*ar[i];
        ar1[j]++;
        j=(j+1)%k;
    }
    cout<<sum<<endl;
    return 0;
}

