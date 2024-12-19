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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n-1;i++){
            if(n==2){
                int diff = abs(v[i]-v[i+1]);
                if(diff>=2){
                    cout<<"YES"<<el;
                }else{
                    cout<<"NO"<<el;
                }
            }else{
                cout<<"NO"<<el;
                break;
            }
        }
     
    }
    return 0;
}