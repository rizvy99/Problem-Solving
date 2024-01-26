#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
int gcd(int x,int y) {
    while (y!=0) {
        int temp = y;
        y=x%y;
        x=temp;
    }
    return x;
}
int main() {
    int t;
     cin >> t;

    while (t--) {
        int k;
         cin>>k;

        int g=gcd(k,100-k);
        int ans=k/g+(100-k)/g;
         cout<<ans<<el;
    }

    return 0;
}
