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
    set<int>s;
    int n;
    cin>>n;
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
        int p;
        cin>>p;
        s.insert(p);
    }
    int y;
    cin>>y;
    for(int i=1;i<=y;i++){
        int q;
        cin>>q;
        s.insert(q);
    }
    if(s.size()==n){cout<<"I become the guy."<<el;}
    else{cout<<"Oh, my keyboard!"<<el;}
    return 0;
}