#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int ar[t];
    for(int i=0;i<t;i++){
        cin>>ar[i];
        if(ar[i]==1||ar[i]==2){
            cout<<"0"<<endl;
        }
        else{
            cout<<(ar[i]-1)/2<<endl;
        }
    }
return 0;
}
