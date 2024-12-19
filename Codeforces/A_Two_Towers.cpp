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
        int n,k,cnt=0;
        string s1,s2;
        cin>>n>>k>>s1>>s2;
        reverse(s2.begin(),s2.end());
        s1+=s2;
        int total = n+k;
        for(int i=0;i<total-1;i++){
            if(s1[i]==s1[i+1]){cnt++;}
        }
        if(cnt<=1){
            cout<<"YES"<<el;
        }else{
            cout<<"NO"<<el;
        }
     
    }
    return 0;
}