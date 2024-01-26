#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
     cin >> t;
    while (t--) {
        int n;
         cin >> n;
        int space = 0,x = 0;
        for (int i = 0; i < n; ++i) {
            int a;
             cin >> a;
            if (a== 0) {
                 x++;
            } else {
                space =max(space,x);
                x = 0;
            }
        }
        space =  max(space, x);
       cout << space << endl;
    }
    return 0;
}
