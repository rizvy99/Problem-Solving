#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;

void solve() {
    int t;
    cin >> t;  
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> ans(n);
        int j=1;
        for(int i = k-1;i<n;i+=k,j++){
            ans[i]=j;
        }
        for(int i=0;i<n;i++){
            if((i+1)%k!=0){
                ans[i]=j;
                j++;
            }
        }
        for(auto i:ans){
            cout<<i<<" ";
        }cout<<el;
        
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
