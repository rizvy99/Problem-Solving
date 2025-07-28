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
        int n,cnt=-1,cnt1=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i = 0;i<s.size()-1;i++){
            if(s[i]==s[i+1] && s[i]=='*'){
                cnt=i;
                break;

            }
        }
        if(cnt==-1){
            cnt=n;
        }
        for(int i=0;i<cnt;i++){
            if(s[i]=='@'){
                cnt1++;
            }
        }
        cout<<cnt1<<el;
     
    }
    return 0;
}