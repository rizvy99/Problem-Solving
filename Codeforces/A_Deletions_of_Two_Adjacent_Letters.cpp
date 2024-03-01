#include <bits/stdc++.h>
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
    while (t--) {
        string s;
        cin >> s;
        char ch;
        cin >> ch;
        int n= s.size();
        bool flag =false;
        for(int i=0;i<n;i++){
            if(s[i]==ch){
                if(i%2==0 && (n-1-i)%2==0){
                    flag=true;
                    break;
                }
            }
        }
            if (flag) {
                cout << "YES" << el;
            } else {
                cout << "NO" << el;
            }
        
    }
    return 0;
}