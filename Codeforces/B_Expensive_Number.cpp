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
        int cnt=0,cnt1=0;
        string s;
        cin>>s;
        int n = s.size();
        if(n==1){
            cout<<0<<el;
        }else{
            for(int i=n-1;i>=0;i--){
                if(s[i]=='0'){
                    cnt++;
                }else{break;}
            }
            //cout<<cnt<<el;
            int n1 = n-cnt-1;
            for(int i=0;i<n1;i++){
                if(s[i]!='0'){
                    cnt1++;
                }else{continue;}
            }
            cout<<cnt1+cnt<<el;
        }
        
     
    }
    return 0;
}