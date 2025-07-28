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
        int n,x;
        cin>>n>>x;
        int ar[n];
        double sum =0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            sum+=ar[i];
        }
        if((sum/n)==x){
            cout<<"YES"<<el;
        }else{
            cout<<"NO"<<el;
        }
    }
    return 0;
}