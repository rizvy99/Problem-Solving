#include<bits/stdc++.h>
using namespace std;
int main() {
    //char s[30];
    string s;
    cin >> s;
    char ch = s[0];
    int len = s.size();

    for(int i = 0; i < len; i++) {
        int t = s[i] - '0';
        int rev = 9 - t;
        if (rev < t) {
            s[i] = rev + '0';
        }
    }

    if(s[0] == '0') {
        s[0] = ch;
    }

    for(int i = 0; i < len; i++) {
        cout << s[i];
    }

    return 0;
}

