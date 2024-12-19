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
        for(int i=0;i<n;i++){
            if((n==1 && v[i]==0) ){
                cout<<"No"<<el;
            }
            else{
                if(n%2!=0 && v[n-1]==1){
                    cout<<"Yes"<<el;
                }else{cout<<"No"<<el;}
            }
        }
     
    }
    return 0;
}