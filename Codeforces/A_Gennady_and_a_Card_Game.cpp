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
    int cnt=0;
    for(int i=0;i<5;i++){
        string s1;
        cin>>s1;
        if((s[0]==s1[0]||s[0]==s1[1])||(s[1]==s1[0]||s[1]==s1[1])){
            cnt++;
        }
    }
    if(cnt>0){
        cout<<"YES"<<el;
    }else{
        cout<<"NO"<<el;
    }
    return 0;
}