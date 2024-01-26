#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum=n*4;
    for(int i=1;i<=sum;i++){
        if(i%4==0){
                cout<<"PUM"<<endl;
             continue;
        }cout<<i<<" ";
    }
    return 0;
}


