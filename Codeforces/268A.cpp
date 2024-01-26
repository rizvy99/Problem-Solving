#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int h[30],a[30];
    for(int i=0;i<n;i++){
        //int h,a;
        cin>>h[i]>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j&&h[i]==a[j]){
                count++;
            }
        }
    }
    cout<<count;
}
