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
        int n,m;
        cin>>n>>m;
        vector<string>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int r_sum=0,c_sum=0,cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]=='#'){
                    r_sum +=i+1;
                    c_sum +=j+1;
                    cnt++;
                }
            }
        }
        cout<<(r_sum/cnt)<<" "<<(c_sum/cnt)<<el;

    }

    return 0;
}