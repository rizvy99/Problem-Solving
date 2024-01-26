#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    float sum;
    while(true){
        cin>>n;
        if(n>0){
         sum+=n;
        count++;
        }
        else if(n<0){
            break;
        }
    }
        cout<<fixed<<setprecision(2)<<sum/count<<endl;
    return 0;
}



