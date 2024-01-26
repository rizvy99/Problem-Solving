#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[5],count=0;
    for(int i=0;i<5;i++){
        cin>>ar[i];
        if(ar[i]%2==0){
                count++;
        }
    }
    cout<<count<<" valores pares"<<endl;
    return 0;
}
