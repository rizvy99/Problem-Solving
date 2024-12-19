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
        int x, y, k;
        cin >> x >> y >> k; 
        for (int i = 0; i < k - (k % 2); i++) {
            if (i % 2 == 0) {
                int step = (i / 2) + 1;  
                cout << (x + step) << " " << y << el;
            } else {
                int step = (i / 2) + 1;  
                cout << (x - step) << " " << y << el;
            }
        }
        if (k % 2 != 0) {
            cout << x << " " << y << el;  
        }
    }
    return 0;
}