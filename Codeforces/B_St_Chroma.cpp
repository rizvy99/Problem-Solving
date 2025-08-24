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
        int n,x;
        cin>>n>>x;
        if (x == 0) {
            for (int i = 1; i <=n-1; i++)
            {
                cout << i << " ";
            }
            cout << 0 <<el;
        }
        else if (x >= 1 && x <= n - 1) {
            for (int i = 0; i < x; i++)
            {
                cout << i << " ";
            }
            for (int i = x + 1; i < n; i++){
                cout << i << " ";
            }
            cout << x <<el;;
        }
        else if (x == n) {
            for (int i = 0; i < n; i++)
            {
                cout << i << " ";
            }
            cout <<el;
        }
    }
    return 0;
}

   