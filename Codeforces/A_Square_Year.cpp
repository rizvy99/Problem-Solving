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
        int n1 = sqrt(n);
        int n2 = n1*n1;
        if(n2!=n){
            cout<<-1<<el;
        }else{
            cout<<0<<" "<<n1<<el;
        }
     
    }
    return 0;
}