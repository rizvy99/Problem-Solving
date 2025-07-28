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
        bool flag = true;
        int left = v[0],right = v[0];
        for(int i=1;i<n;i++){
            if(v[i]-1 == left){
                left = v[i];
            }
            else if(v[i]+1 == right){
                right = v[i];
            }
            else{
                flag = false;
                break;
            }
        }
        cout<<(flag? "YES" : "NO")<<el;
         
     
    }
    return 0;
}