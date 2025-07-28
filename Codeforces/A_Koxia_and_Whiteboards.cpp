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
		vector<long long> v(n+m);
		for(int i=0;i<n+m;i++){
            cin>>v[i];
        }
		
		sort(v.begin(),v.end()-1);
		reverse(v.begin(),v.end());
		
		ll ans = 0;
	    for(int i = 0;i<n;i++){
            ans += v[i];
        }
		
		cout<<ans<<el;
	}
    
	
	
	return 0;
}