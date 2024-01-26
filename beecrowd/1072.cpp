#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,count1=0;
    cin>>n;
    for(int i=0;i<n;i++){
            int a;
    cin>>a;
        if(a>=10&&a<=20){
            count++;
        }else{
            count1++;
        }
    }
    cout<<count<<" in"<<endl;
    cout<<count1<<" out"<<endl;
    return 0;
}





