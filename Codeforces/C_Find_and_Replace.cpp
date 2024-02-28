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
        ll n;
        cin>>n;
        string s,sr=0;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                sr+="0";
            }else{
                sr+="1";
            }
        }
        cout<<sr<<el;
    }
    return 0;
}