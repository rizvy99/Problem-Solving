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
        int n,total=0;
        cin>>n;
        string s;
        cin>>s;
        for(auto c:"ABCD"){
            int cnt = count(s.begin(),s.end(),c);
            total+=min(n, cnt);
        }
        cout<<total<<el;
     
    }
    return 0;
}