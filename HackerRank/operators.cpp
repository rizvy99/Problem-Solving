#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
         string cards;
         cin >> cards;

        if ((cards[0] == 'a' && cards[1] == 'b') ||
            (cards[1] == 'a' && cards[2] == 'b') ||
            (cards[0] == 'a' && cards[2] == 'b')) {
             cout << "YES" << endl;
        } else {
             cout << "NO" <<endl;
        }
    }

    return 0;
}
