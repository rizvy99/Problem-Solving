#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,sum1;
    double sum=0;
      int a[n];
    cin>>n;
   for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];

      sort(a,a+n);
      //for(int i=0;i<n;i++){
            double b=sum/2;
            sum1+=a[i];
            //double c=sum;
            if(sum1>b){
                   // count++;
                break;
            }
            else if(sum1<b){
                count++;
            }
      }

            cout<<count;
}



