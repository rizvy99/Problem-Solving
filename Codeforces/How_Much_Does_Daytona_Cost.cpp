#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++){
                int a[100] ;
            cin>>a[i] ;
            if(a[i]==k){
                cout<<"YES"<<endl;
                break;
            }
             else{
                    i++;
            //cout<<"NO"<<endl;
        }

        }

    }

    return 0;
}
