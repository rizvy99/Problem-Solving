#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b){
     int temp =a;
     a=b;
     b= temp;
    }
    int s=(b-a)/2;
    cout<<a<<" "<<s<<endl;

    return 0;
}

