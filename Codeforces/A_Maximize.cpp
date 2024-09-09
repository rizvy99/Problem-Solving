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
        int x;
		cin>>x;
		int mx=-1e9,ans=1;
        for(int i=0;i<n;i++){
            int k= gcd(x,i)+i;
            if(k>mx){
                mx = k;
                ans = i;
            }
        }
        cout<< ans <<el;
     
    }
    return 0;
}