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
        bool flag = true;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n-1;i++){
            if(v[i]!=i+1){
                if(v[i+1]==i+1 && v[i]==i+2){
                    swap(v[i],v[i+1]);
                    //cnt++;
                }else{
                    flag = false;
                    break;
                }
            } 
        }
        cout<<(flag? "YES" : "NO")<<el;
    }
    return 0;
}