#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,a,sq,sum=0;
        cin>>n;
        for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
        }
        sq=sqrt(sum);
        long long int total=sq*sq;
        if(total==sum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
