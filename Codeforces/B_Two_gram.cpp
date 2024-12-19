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
    int n,cnt=0,cnt1=0;
    cin>>n;
    string s,s1;
    cin>>s;
    for(int i=0;i<n;i++){
        cnt=0;
        for(int j=0;j<n;j++){
            if(s[i]==s[j] && s[i+1]==s[j+1]){
                cnt++;
                if(cnt1<cnt){
                    cnt1=cnt;
                    s1= string(1,s[i])+string(1,s[i+1]);
                }
            }
        }
    }cout<<s1<<el;

    return 0;
}