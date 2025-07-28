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
        int a,b,c;
        cin>>a>>b>>c;
        int sub= b-a;
        int sub1 = c-sub;
        int diff = sub1-b;
        if(diff<0){
            cout<<"NO"<<el;
        }else{
        if(diff%3==0){
            cout<<"YES"<<el;
        }else{
            cout<<"NO"<<el;
        }
    }
     
    }
    return 0;
}