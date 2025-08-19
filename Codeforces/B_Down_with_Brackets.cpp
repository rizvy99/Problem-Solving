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
        int n = s.size();
        stack<char>sk;
        int cnt=0;
        for(char u :s){
            if(sk.empty()){
                cnt++;
                sk.push(u);
            }
            else if(u == '('){
                sk.push(u);
            }else{sk.pop();}
        }
        if(cnt>1){
            cout<<"YES"<<el;
        }else{
            cout<<"NO"<<el;
        }
     
    }
    return 0;
}