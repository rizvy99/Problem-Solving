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
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        int l1=0,r1=0;
        for(int i=0;i<=r;i++){
            if(m>=1 && r1+1<=r){
                r1++;
                m--;
            }
        }
        for(int i=l;i<=0;i++){
            if(m>=1){
                l1--;
                m--;
            }
        }
        cout<<l1<<" "<<r1<<el;
    }
    return 0;
}