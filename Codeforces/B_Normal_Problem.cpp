#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
char transformChar(char c) {
    if (c == 'p') return 'q';
    if (c == 'q') return 'p';
    return 'w'; 
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s,s1;
        cin >> s;
        for (int i = s.size() - 1; i >= 0; --i) {
            s1 += transformChar(s[i]);
        } 
        cout << s1 << el;
    }
    
    return 0;
}