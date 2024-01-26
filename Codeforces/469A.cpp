#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,count=0,ar[210];
    cin>>n>>p;
    for(int i=0;i<p;i++){
        cin>>ar[i];
    }
    cin>>q;
    for(int i=p;i<p+q;i++){
        cin>>ar[i];
    }
    sort(ar,ar+(p+q));
    for(int i=0;i<p+q;i++){
    if(ar[i]!=ar[i+1]){
            count++;
       }
       else{
        continue;
       }
    }
    if(count==n){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;

}
