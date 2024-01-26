#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    for(int i=1;;i++){
        if(n-i==0){
            break;
        }
        if(m-i==0){
            break;
        }
        count++;
    }
    if(count%2==0){
        cout<<"Akshat"<<endl;
    }
    else{
        cout<<"Malvika"<<endl;
    }
    return 0;
}
