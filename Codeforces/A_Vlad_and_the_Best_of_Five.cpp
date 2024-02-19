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
        string s;
        cin>>s;
        int cnt=0,cnt1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                cnt++;
            }else{
                cnt1++;
            }
        }
        if(cnt>cnt1){
            cout<<"A"<<el;
        }else{
            cout<<"B"<<el;
        }

     
    }
    return 0;
}