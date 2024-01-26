#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    cin>>n;
    if(n>=0.00 &&n<=2000.00){
        cout<<"Isento"<<endl;
    }
    else if(n>=2000.01&&n<=3000.00){
             float point=n-2000.00;
        cout<<"R$ "<<fixed<<setprecision(2)<<(point*0.08) <<endl;
    }
     else if(n>=3000.01&&n<=4500.00){
           float point=n-2000.00;
           cout<<"R$ "<<fixed<<setprecision(2)<<(1000.00*0.08)+(point-1000.00)*0.18 <<endl;
     }
     else{
             float point=n-2000.00;
         cout<<"R$ "<<fixed<<setprecision(2)<<(1000.00*0.08)+(1500.00*0.18)+(point-2500.00)*0.28<<endl;
    }
    return 0;
}
