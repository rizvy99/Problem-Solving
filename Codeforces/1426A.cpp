#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,appr,floor;
    cin>>t;
    while(t--){
       // int n,x;
        cin>>n>>x;
        appr=2;floor=1;
        while(appr<n){
            appr+=x;
            floor++;
        }
        cout<<floor<<endl;
    }
    return 0;
}
