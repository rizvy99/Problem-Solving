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
    ll X;
    cin >> X;
    ll fact = 1;
    int N = 1;
    while (fact < X) {
        N++;
        fact *= N; 
    }
    cout << N << el;
    
    return 0;
}
