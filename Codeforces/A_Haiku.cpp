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
    int cnt=0,cnt1=0,cnt2=0;
    /*for(int i=0;i<3;i++){
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ){
                cnt++;
            }
        }
       
    }
    if(cnt==17){
            cout<<"YES"<<el;
        }else{
            cout<<"NO"<<el;
        }*/
    string s,s1,s2;
    getline(cin,s);
    getline(cin,s1);
    getline(cin,s2);
    bool flag = true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ){
            cnt++;
        }
    }
    for(int i=0;i<s1.size();i++){
        if(s1[i]=='a' ||s1[i]=='e' ||s1[i]=='i' ||s1[i]=='o' ||s1[i]=='u' ){
            cnt1++;
        }
    }
    for(int i=0;i<s2.size();i++){
        if(s2[i]=='a' ||s2[i]=='e' ||s2[i]=='i' ||s2[i]=='o' ||s2[i]=='u' ){
            cnt2++;
        }
    }
    if(cnt==5 && cnt1==7 && cnt2==5){
        cout<<"YES"<<el;
    }else{
        cout<<"NO"<<el;
    }
    
    
    return 0;
}