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
        int res=0,pow=1;
        for(int i = 9; i > 0; i--){
            if(i > n){
                continue;
            }else{
            res += pow * i; 
            pow *= 10;
            n -= i;
            }
        }

        cout<<res<<el;
     
    }
    return 0;
}