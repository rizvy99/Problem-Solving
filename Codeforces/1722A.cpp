#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        for(int i=0;i<n;i++){
             char c;
             cin>>c;
             s+=c;
        }
        if(s=="Timur"|| s=="miurT"||s="Trumi"||s=="mriTu"){
        cout<<"YES"<<endl;
        }
    }else{cout<<"NO"<<endl;}
}
