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
        for(int i=0;i<3;i++){
            cin>>s;
           
        }
        if(s[0]==s[1]&&s[1]==s[2]){
            cout<<s[0]<<el;
        }else{
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    for(int k=0;k<3;k++){
                        if((s[i]=='X'&&s[j]=='X'&&s[k]=='X')||(s[i]=='O'&&s[j]=='O'&&s[k]=='O')||(s[i]=='+'&&s[j]=='+'&&s[k]=='+')){
                            cout<<s[i]<<el;
                            break;
                        }
                        
                    }
                }
            }
        }//cout<<"DRAW"<<el;
     
    }
    return 0;
}