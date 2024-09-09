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
         int a, b;
        cin >> a >> b;
         if ((a + 2 * b) % 2 == 0) {
            int target = (a + 2 * b) / 2;  
            if (target % 2 == 0 || (target % 2 == 1 && a >= 1)) {
                cout << "YES" << el;
            }else {
                cout << "NO" << el;
            }
        } else {
            cout << "NO" << el; 
        }
    }
     
    
    return 0;
}