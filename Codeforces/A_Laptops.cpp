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
    int count==0;
    //int cnt2==0;
    cin>>t;
    while(t--){
      int a,b;
     cin>>a>>b;
     if(a<b){
        count++;
        }
    }
    if(count>0){
        cout<<"Happy Alex"<<el;
    }
    else{
        cout<<"Poor Alex"<<el;
    }
    
        
      
    return 0;
}