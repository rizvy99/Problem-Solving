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
    char s[1000],tmp[1000];
    cin>>s;
    int len =0;
    while(s[len]!=0){
        tmp[len]=s[len];
        len++;
    }
    for(int i=0,j=len-1;i<j;i++,j--){
        char ch = tmp[i];
        tmp[i]=tmp[j];
        tmp[j]=ch;
    }
    bool isEqual = true;
    for(int i=0;i<len;i++){
        if(s[i]!=tmp[i]){
            isEqual = false;
            break;
        }
    }
    /*if(isEqual){
        cout<<"YES"<<el;
    }else{
        cout<<"NO"<<el;
    }*/
    //*****turnary oprator******;
    (isEqual)?cout<<"YES"<<el:cout<<"NO"<<el;
    return 0;
}