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
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int cnt = 0;
        bool zero = false;    
        for(int i=0;i<n;i++){
            if(v[i]!=0 && !zero){
                cnt++;
                zero = true;
            }else if(v[i]==0){
                zero = false;
            }
        }
        if(cnt>2){
            cout<<2<<el;
        }else{
            cout<<cnt<<el;
        }
    }
    return 0;
}