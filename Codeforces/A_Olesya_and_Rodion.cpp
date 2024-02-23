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
    int n,t;
    cin>>n>>t;
    if(n==1 && t==10){
        cout<<"-1"<<el;
        return 0;
    }
    cout<<t;
    if(t==10){
        for(int i=1;i<n-1;i++){
            cout<<0;
        }
    }else{
        for(int i=1;i<n;i++){
            cout<<0;
        }
    }
    cout<<el;
    return 0;
}