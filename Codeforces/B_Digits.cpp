#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
    vector<int> num(ll n,ll d){
    vector<int>v;
    ll fact = 1;
    v.push_back(1);
    if(n>=3 || d%3==0){
        v.push_back(3);
    }
    if(d==5){
        v.push_back(5);
    }
    if(n>=3 || (n==2 && d ==7)){
        v.push_back(7);
    }
    if(n>=6){
        v.push_back(9);
    }
    else{
        
        for(int i=1;i<=n;i++){
            if((fact*d)%9==0){
                v.push_back(9);
            }
        }
    }return v;
 }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        int n,d;
        cin>>n>>d;
        vector<int>v = num(n,d);
        for(auto u : v){
            cout<<u<<" ";
        }cout<<el;
    }
    
    return 0;
}
