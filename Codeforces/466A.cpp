#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,a,b,sum,count=0;
    cin>>n>>m>>a>>b;
     if(m*a>b){
        sum=(n%m)*a;
        if(sum>b){
            cout<<(n/m)*b+b<<endl;
        }
        else{
            cout<<(n/m)*b+sum<<endl;
        }

     }
     else{
        cout<<n*a<<endl;
     }
    return 0;
}
