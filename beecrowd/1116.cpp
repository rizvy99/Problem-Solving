#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float a,b;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>a>>b;
    if(b==0){
        cout<<"divisao impossivel"<<endl;
    }else{
    float div=a/b;
     cout<<fixed<<setprecision(1)<<div<<endl;
    }
    }
    return 0;
}

