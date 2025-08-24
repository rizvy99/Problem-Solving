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
        int n, m, a[50], b[50];
        ll sumA = 0, sumB = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            cin >> a[i], sumA += a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i], sumB += b[i];
        if (sumA > sumB) cout << "Tsondu"<<el;
        if (sumA < sumB) cout << "Tenzing"<<el;
        if (sumA == sumB) cout << "Draw"<<el;
    }

    return 0;
}