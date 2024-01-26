#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool pos = false;
        for(int i=2;i<(int)1e3;i++){
            if((n-1-i)%3&&i%3!=0&&(n-1-i)!=1&&(n-i-1)!=i&&(n-1-i)>0){
                pos =true;
                cout<<"YES"<<endl;
                cout<<1<<" "<<i<<" "<<(n-1-i)<<endl;
                break;
            }
        }
        if(!pos){
            cout<<"NO"<<endl;
        }
    }
}
