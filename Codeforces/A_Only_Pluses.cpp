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
        int a, b, c;
        cin >> a >> b >> c;
        int ans = a * b * c;       
         for (int i = 0; i <= 5; i++) {
            for (int j = 0; j <= 5 - i; j++) {
                int k = 5 - i - j;
                int A = a + i;
                int B = b + j;
                int C = c + k;
                ans = max(ans,A * B *C);
            }
        }

        cout << ans << endl;
    }
    return 0;
}

 