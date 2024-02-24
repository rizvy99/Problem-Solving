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
    string s;
    cin>>s;
    int cnt=1,cnt1=1;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            cnt++;
            cnt1 = max(cnt,cnt1);
        }else{
            cnt=1;
        }
    }
    cout<<cnt1;
    return 0;
}