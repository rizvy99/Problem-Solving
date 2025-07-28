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
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int take_gold=0,gave_gold=0;
        for(int i=0;i<n;i++){
            if(v[i]>=k){
                take_gold+=v[i];
            }else if(v[i]==0){
                if(take_gold>0){
                    take_gold--;
                    gave_gold++;
                }
            }
        }
        cout<<gave_gold<<el;
    }
    
    return 0;
}
