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
        bool flag=false;
        for(int i=1;i<s.size();i++){
            if(s[i]!='0' && stoi(s.substr(0,i))<stoi(s.substr(i))){
                cout<<s.substr(0,i)<<" "<<s.substr(i)<<el;
                flag=true;
                break;
            } 
        }
        if(!flag){
            cout<<-1<<el;
        }
    }
    return 0;
}