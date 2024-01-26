#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n ,d;
    cin>>n;
        if(n%2==0){
              cout<<n/2<<endl;
        }
        else{
                d= -((n/2)+1);
              cout<<d<<endl;
        }
        return 0;
}
