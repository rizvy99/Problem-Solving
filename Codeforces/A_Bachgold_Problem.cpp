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
    if(n % 2 == 1){
        n /= 2;
        n--;
        cout << n + 1 << el << 3 << ' ';
    } else {
        n /= 2;
        cout << n << el;
    }
    for(int i = 0; i < n; i++){
        cout << 2 << ' ';
    }
    cout << el;

    return 0;
}