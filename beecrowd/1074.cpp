#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
            int value;
        cin>>value;
        if(value%2==0&&value>0){
            cout<<"EVEN POSITIVE"<<endl;
        }else if(value%2==0&&value<0){
            cout<<"EVEN NEGATIVE"<<endl;
        }else if(value%2!=0&&value>0){
           cout<<"ODD POSITIVE"<<endl;
        }else if(value%2!=0&&value<0){
            cout<<"ODD NEGATIVE"<<endl;
        }
        else{
            cout<<"NULL"<<endl;
        }
    }
    return 0;
}

