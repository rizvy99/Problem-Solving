#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n ;
    cin>>n;
    int sum=n/100;
    int sum1=(n%100)/20;
    int sum2=((n%100)%20)/10;
    int sum3=(((n%100)%20)%10)/5;
    int sum4=((((n%100)%20)%10)%5);
    int total=sum+sum1+sum2+sum3+sum4;
    cout<<total<<endl;

}
