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
        int n,k;
        cin>>n>>k;
        if(n>=k){
            if(k>0){cout<<1<<el;}
            else{cout<<0<<el;}
            continue;
        }
        k=k-n;
        int p=n-1,cnt=1;
        while(k>0){
            k=k-p;
            cnt++;
            if(k<=0){break;}
            k=k-p;
            cnt++;
            p--;
        }
        cout<<cnt<<el;
        
     
    }
    return 0;
}