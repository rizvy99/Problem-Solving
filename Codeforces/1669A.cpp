#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=1399){cout<<"Division 4"<<endl;}
        else if(1400<=n&&n<=1599){cout<<"Division 3"<<endl;}
        else if(1600<=n&&n<=1899){cout<<"Division 2"<<endl;}
        else if(1900<=n){cout<<"Division 1"<<endl;}

    }
    return 0;
}
