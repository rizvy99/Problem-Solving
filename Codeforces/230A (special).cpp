#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,count=0;
    cin>>s>>n;
    pair<int,int>x[1000];
    for(int i=0;i<n;i++){
        cin>>x[i].first>>x[i].second;
    }
    sort(x,x+n);
    for(int i=0;i<n;i++){
        if(s<=x[i].first){
            count++;
            break;
        }
        else{
            s=s+x[i].second;
        }
    }
    if(count>0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}
