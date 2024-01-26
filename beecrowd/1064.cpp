#include<bits/stdc++.h>
using namespace std;
int main()
{
    double number[6];
    int count=0;
    double sum=0.0;
    for(int i=0;i<6;++i){
        cin>>number[i];
        if(number[i]>0){
            count++;
            sum+=number[i];
        }
    }
        cout<<count<<" valores positivos"<<endl;
        cout<<fixed<<setprecision(1)<<sum/count<<endl;
 return 0;
}
