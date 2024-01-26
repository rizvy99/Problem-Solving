#include <iostream>
using namespace std;
 int main ()
 {
     int n,h,sum=0,sum1=0;
     cin>>n>>h;
     for(int i=0;i<n;i++){
        int a[n];
        cin>>a[i];
        if(a[i]<=h){
            sum=sum+1;
        }
        else{
            sum1=sum1+2;
        }
     }
     int total=sum+sum1;
     cout<<total<<endl;
    return 0;
}

