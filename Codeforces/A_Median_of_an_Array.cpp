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
    ll t;
    cin>>t;
   while (t--) {
        int n,cnt=0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a + n);
        for(int i = (n+1)/2;i<=n;i++){
            if(a[i]==a[(n+1)/2])
            {
                cnt++;
            }else{break;}
        }
        cout<<cnt<<el;
   }
    return 0;
}