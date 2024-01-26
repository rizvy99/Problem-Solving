#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,sol=2,count=0;
        bool water=false;
        cin>>n;
        string str;
        cin>>str;
        for(int i=0;i<n;i++){
            if(str[i]=='.'&&i+2<n&&str[i+1]=='.'&&str[i+2]=='.'){
                water=true;
            }
            if(str[i]=='.'){
                count++;
            }
        }
        if(!water){
            sol=count;
        }
        cout<<sol<<endl;

    }
    return 0;
}
