#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
    for(int i=0;i<n;i++){
            float a,b,c;
           cin>>a>>b>>c;
            float average=(a*2+b*3+c*5)/10;
            cout<<fixed<<setprecision(1)<<average<<endl;
    }
   return 0;
}



