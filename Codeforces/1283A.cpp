#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int h,m;
        cin>>h>>m;
        int hour=(23-h)*60;
        int minite=60-m;
        cout<<hour+minite<<endl;
    }
    return 0;
}
