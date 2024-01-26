#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
         int ar[n];
        for(int i=0;i<n;i++){
           cin>>ar[i];
        }
        sort(ar,ar+n);
        int sub;
        for(int i=0;i<n;i++){
           sub=ar[n-1]-ar[0];
        }
        cout<<sub<<endl;
    }

}
