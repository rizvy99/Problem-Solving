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
        int n,cnt=2;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                cnt+=2;
            }else{cnt++;}
        }
        cout<<cnt<<el;
    }
    return 0;
}