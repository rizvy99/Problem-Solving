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
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<string>cnt;
        for(int i=1;i<n;i++){
            cnt.insert(s.substr(i-1,2));
        }
        cout<<cnt.size()<<el;
     
    }
    return 0;
}