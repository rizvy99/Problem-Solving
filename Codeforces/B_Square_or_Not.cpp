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
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {   
                cnt++;
            }
        }
        
        int root = sqrt(n);
        if(n==4){
            cout<<"Yes"<<el;
        }else{
         if (root * root == n && cnt > 0) {
            cout << "Yes" << el;
        } else {
            cout << "No" << el;
        }
        }
    }
    
    return 0;
}
