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
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++) {  
            cin >> ar[i];
        }
        
        int sum = 0, sum1 = 0;
        for(int i = 0; i < n; i += 2) {  
            sum += ar[i];
        }
        for(int i = 1; i < n; i += 2) {  
            sum1 += ar[i];
        }
        
        cout << sum - sum1 << el; 

    }
    return 0;
}
