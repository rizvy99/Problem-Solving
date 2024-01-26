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
    int n,m,cnt=0;
    cin>>n>>m;
    char cr;
    int mul=n*m;
    for(int i=1;i<=mul;i++){
            cin>>cr;
            if(cr=='B'||cr=='W'||cr=='G'){
                cnt++;
            }
    }
    if(cnt==mul){
        cout<<"#Black&White"<<el;
    }
    else{
        cout<<"#Color"<<el;
    }
    
            
      
    return 0;
}