#include<bits/stdc++.h>
using namespace std;
int main(){
   int t,count=0,x=0;
   cin>>t;
   int ar[t];
   for(int i=0;i<t;i++){
    cin>>ar[i];
    //cin>>a;
   }
   sort(ar,ar+t);
    for(int i=0;i<t;i++){
        int sub=ar[t-1]-ar[i];
            x+=sub;
    }
    cout<<x;

    return 0;
}

