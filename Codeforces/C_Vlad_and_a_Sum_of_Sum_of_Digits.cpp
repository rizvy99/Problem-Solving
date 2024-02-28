#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll num=0,sum = 0;
        while (num > 0) {
        sum += num % 10;
        num /= 10;
    
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }
        }
        cout << sum <<el;
    }

    return 0;
}


    