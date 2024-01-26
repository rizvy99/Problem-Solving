#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,ans=0;
        cin>>n;
        int mod=n%10;
        if(mod<9){
            ans=n/10;
        }
        else{
            ans=(n/10)+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
