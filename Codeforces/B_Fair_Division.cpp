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
    ll t;
    cin>>t;
    while(t--){
        int a, n, div = 0, sum= 0,cnt = 0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a == 1){
                cnt++;
                sum+=1;
            }
            else if (a==2){
                sum +=2;
            }
        }
        if(sum % 2 == 0){
            div = sum/2;
            if(div % 2 == 0){
                cout<<"YES"<<el;
            }
            else{
                if(!cnt){
                    cout<<"NO"<<el;
                }
                else{
                    cout<<"YES"<<el;
                }
            }
        }
        else{
            cout<<"NO"<<el;
        }

    }
    return 0;
}