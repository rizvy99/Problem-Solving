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
        int n,m,cnt=0;
        cin>>n>>m;
        string s,T;
        cin>>s;
        cin>>T;
        for(int i=0;i<m-1;i++){
            if(T[i]==T[i+1]){cnt++;}
        }
        bool flag = true;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                if(cnt!=0){
                    cout<<"No"<<el;
                    flag = false;
                    break;
                }
                else if(s[i]!=T[0] && s[i+1]!=T[m-1]){
                    flag = true;
                }
                
                else{
                    cout<<"No"<<el;
                    flag =false;
                    break;
                }
            }
        }
        if(flag){
            cout<<"Yes"<<el;
        }
    }
    return 0;
}