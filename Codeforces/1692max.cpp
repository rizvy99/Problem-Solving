//wrong code
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ,ar[4],count=0;
    cin>>t;
    while(t--){
             for(int i=0;i<4;i++){
                cin>>ar[i];
             }
             for(int i=1;i<=4;i++){
                int count=0;
                if(ar[0]< i){
                    count++;
                }
             }
             cout<<count<<endl;
    }
    return 0;
}
//////
