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
    ll n;
    cin >> n;
    ll ar[n];
    for(int i=0;i<n-1;i++) {
        cin>>ar[i];
    }
    sort(ar,ar+n-1);
    for(int i = 0;i<n-1;i++) {
        if (ar[i]!=i+1){
            cout<<i+1<<el;
            break;
        }
    }
    return 0;
}
