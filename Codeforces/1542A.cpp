#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int cnt1=0,cnt2=0;
      int ar[2*n];
      for(int i=0;i<2*n;i++){
        //int a[i];
        cin>>ar[i];
        if(ar[i]%2==0){
            cnt1++;
        }
        else{
            cnt2++;
        }
      }
      if(cnt1==cnt2){
        cout<<"Yes"<<endl;
      }
      else{
        cout<<"No"<<endl;
      }
    }
    return 0;
 }
