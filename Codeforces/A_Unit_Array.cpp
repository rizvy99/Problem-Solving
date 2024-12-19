#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
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
        int ar[n],cnt=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]< 0){cnt++;}
        }
        if(cnt==n){
            cout<<n<<el;
        }else{
            if(cnt%2!=0){
                cout<<1<<el;
            }else{
                cout<<0<<el;
            }
        }
     
    }
    return 0;
}