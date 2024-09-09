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
        int x1, y1, x2, y2;
        cin >> x1 >> y1;
        cin >> x2 >> y2;

        if (x1 > y1) {
            swap(x1, y1);
            swap(x2, y2);
        }

        if (x1 < y1 && y2 < x2) {
            cout << "NO" << el;
        } else {
            cout << "YES" << el;
        }
    }

    return 0;
}

 