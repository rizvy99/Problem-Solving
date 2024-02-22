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
    const string s1= "qwertyuiopasdfghjkl;zxcvbnm,./";
    string s,sum;
    char ch;
    cin>>ch;
    cin>>s;
    for(int i=0;i<s.size();i++){
        int index=s1.find(s[i]);
        if(ch=='R'){
            sum+=s1[index-1];
        }else{
            sum+=s1[index+1];
        }
    }
    cout<<sum<<el;
    return 0;
}