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
    char s[30];
    cin >> s;
    char ch = s[0];
    int len = strlen(s);
    
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
