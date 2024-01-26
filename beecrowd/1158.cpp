#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,y ;
    cin>>a;
   for(int i=0;i<a;i++){
        cin>>b>>y;
        long long sum=0;
             for(int j=0;j<y;j++){
                sum+=b;
                b+=2;
        }
    }
   cout<<sum<<endl;
    return 0;
}
