#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;

    bool Case = true;

    for (int i = 1; i < s.length(); i++) {
        if (islower(s[i])) {
             Case = false;
            break;
        }
    }

    if ( Case) {
        for (int i = 0; i < s.length(); i++) {
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }

    cout << s << endl;

    return 0;
}
