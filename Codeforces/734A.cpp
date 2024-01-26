#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,sim=0;
    cin>>n;
   while(n--){
        char c;
        cin>>c;
        if(c=='A'){
            count++;
        }
    else if(c=='D'){
       sim++;
        }
    }
    if(count>sim){
        cout<<"Anton"<<endl;
    }
    else if(count<sim){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}

