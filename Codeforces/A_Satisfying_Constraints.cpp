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
        int n,a,x,low=0,high=0,cnt=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a>>x;
        }
        if(a==1){x==low;}
            if(a==2){x==high;}
            for(int j=low;j<=high;j++){
                while(j<=high){cnt++;}
            }
        cout<<cnt<<el;
     
    }
    return 0;
}