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
        int n,cnt=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            
        }
        for(int i=0;i<n-1;i++){
            if(v[i]<=v[i+1]){cnt++;}
        }
        int temp = v[0];
        if(cnt==(n-1)){cout<<0<<el;}
        else{
        for(int i=0;i<n-1;i++){
             
                if(v[i]>v[i+1]){
                    temp = max(temp,v[i]);
                }else{
                    continue;
                }
            
            }
            cout<<temp<<el;
        }
        
     
    }
    return 0;
}