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
    int n= 3;
    int ar[3];
    for(int i=0;i<3;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    if(ar[0]==ar[1] && ar[1]==ar[2]){cout<<"Yes"<<el;}
    else{
        if((ar[0]+ar[1])==ar[2]){
            cout<<"Yes"<<el;
        }else{
            cout<<"No"<<el;
        }
    }

    return 0;
}