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
     int k;
     cin>>k;
     for(int i=0;;i++){
     if(i%3==0||i%10==3){
        continue;
     }else{
        k--;
        if(k==0){
            cout<<i<<el;
            break;
        }

     }
     }
    }
    return 0;
}