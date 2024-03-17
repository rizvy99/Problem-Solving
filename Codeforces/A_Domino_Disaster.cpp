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
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='D'){cout<<"U";}
            else if(s[i]=='U'){cout<<"D";}
            else{cout<<s[i];}
        }
        cout<<el;

     
    }
    return 0;
}