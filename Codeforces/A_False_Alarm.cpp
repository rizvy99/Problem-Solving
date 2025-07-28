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
        int n,x,n1=0;
        cin>>n>>x;
        int n2=n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
             
        }
        for(int i=0;i<n;i++){
            //cin>>v[i];
            if(v[i]==0){
                n1++;
                continue;
            }
            if(v[i]==1){
                break;
            }
        }
        int zero = 0;
        for(int i = n - 1; i >= 0; i--) {
            if(v[i] == 0) {
                zero++;
            }else {
                break;
            }
        }
        int cnt_one = n-zero;
        int range = cnt_one - n1;
        if(range <= x){
            cout<<"YES"<<el;
        }else{
            cout<<"NO"<<el;
        }
     
    }
    return 0;
}