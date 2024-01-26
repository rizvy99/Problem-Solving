#include<bits/stdc++.h>
#define ll long long int
#define nn "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
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
        cout<<"Yes"<<nn;
      }
      else{
        cout<<"No"<<nn;
      }
    }
 }