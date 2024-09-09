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
        if(n%2!=0){
            cout<<"NO"<<el;
        }else{
            cout<<"YES"<<el;
            for(int i=0;i<n/2;i++){
                for(int j=0;j<2;j++){
                    cout<<"AB"[i&1];
                }
            }cout<<el;
        }
    }
    return 0;
}