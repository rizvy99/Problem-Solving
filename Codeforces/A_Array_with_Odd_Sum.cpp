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
        cout<<"NO"<<nn;
     }
     else{
        if(cnt1>0&&cnt2>0){
            cout<<"YES"<<nn;
        }
        else if(cnt1==n&&cnt1%2!=0){
            cout<<"YES"<<nn;
        }
        else{
            cout<<"NO"<<nn;
        }  
     }
    }
    return 0;
}