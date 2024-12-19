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
        int n,k;
        cin>>n>>k;
        int cnt = k/2;
        if(k%2==1 && n%2==1){
            cnt++;
        }

            if(cnt%2!=0){
                cout<<"NO"<<el;
            }
            else{
                cout<<"YES"<<el;
            }

    }
    return 0;
}