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
        string s;
        cin>>s;
        int c0=0,c1=0;
        for(auto  u :s){
            if(u=='0'){c0++;}
            else{c1++;}
        }
        int val = abs(c1-c0)/2;
        if(k<val){cout<<"NO"<<el;}
        else if((k-val)%2==0){cout<<"YES"<<el;}
        else{cout<<"NO"<<el;} 
     
    }
    return 0;
}