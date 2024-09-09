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
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    if(s.size()==1){cout<<"NO"<<el;}
    else{
        cout<<*(++s.begin())<<el;
    }
    return 0;
}