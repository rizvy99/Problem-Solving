#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
       string arr[13]={ "Zero","January","February","March","April","May","June","July","August","September","October","November","December"};
       for(int i=0;i<=12;i++){
        if(i==n){
            cout<<arr[i]<<endl;
        }
       }
    return 0;
}


