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
        int x;
        cin>>x;
        int ar[4];
        for(int i=1;i<=3;i++){
            cin>>ar[i];
        }
        bool result = true;
        if(ar[x]==0) result=false;
        else if(ar[ar[x]]==0) result = false;

        if(result) cout<<"YES"<<el;
        else cout<<"NO"<<el; 
    }

    return 0;
}

     
 