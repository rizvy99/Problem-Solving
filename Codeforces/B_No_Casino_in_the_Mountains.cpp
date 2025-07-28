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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int cnt = 0;
        for(int i=0;i<=n-k;){
            bool flag = true;
            for(int j=0;j<k;j++){
                if(v[i+j]==1){
                    flag = false;
                    break;
                }
            }
            if(flag){
                cnt++;
                i+=k+1;
            }else{
                i++;
            }

        }
        cout<<cnt<<el;
    }
    return 0;
}