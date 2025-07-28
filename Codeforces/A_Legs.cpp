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
     
        int n;
        cin>>n;
        if(n<4){
            cout<<1<<el;
        }else{
            if(n%4==0){
                cout<<n/4<<el;
            }else{
                cout<<(n/4)+1<<el;
            }
        }
    }
    return 0;
}