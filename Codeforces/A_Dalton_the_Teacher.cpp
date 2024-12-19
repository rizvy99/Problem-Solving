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
    int t ;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            
        }
        for(int i=0;i<n;i++){
            if(v[i]==i+1){
                cnt++;
            } else{continue;}
            }
        cout<<(cnt+1)/2<<el;
     
    }
    return 0;
}