#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=1;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
    }

    for(int i=0;i<n;i++){
            if(s[0]==s[i+1]){
                count++;
            }
            else{continue;}
        }
        cout<<count;

}
