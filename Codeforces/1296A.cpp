#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
     int n,cnt1=0,cnt2=0;
     cin>>n;
     int ar[n];
     for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]%2!=0){
            cnt1++;
        }
        else{
            cnt2++;
        }
     }
     if(cnt1==n&&cnt1%2==0){
        cout<<"NO"<<endl;
     }
     else{
        if(cnt1>0&&cnt2>0){
            cout<<"YES"<<endl;
        }
        else if(cnt1==n&&cnt1%2!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
     }
    }
    return 0;
}
