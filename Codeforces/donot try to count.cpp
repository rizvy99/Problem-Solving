#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        bool pos =false;
        for(int i=0;i<=6;i++){
            if(x.find(s)!=-1){
                pos=true;
                cout<<i<<endl;
                break;
            }
            x+=x;
        }
        if(!pos){
            cout<<"-1"<<endl;
        }
    }
}
