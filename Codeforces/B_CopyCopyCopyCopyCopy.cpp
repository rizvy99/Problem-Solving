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
        ll n,b;
        cin>>n;
        set<int>a;
        for(int i=0;i<n;i++)
        {
            cin>>b;
            a.insert(b);
        }
        cout<<a.size()<<endl;
    }
    return 0;
}