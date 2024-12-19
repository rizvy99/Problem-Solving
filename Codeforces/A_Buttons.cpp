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
        int a,b,c;
        cin>>a>>b>>c;
        if (c % 2 == 0) {
            if (a > b) {
                cout << "First" << el;
            } else {
                cout << "Second" << el;
            }
        } else {
            if (b > a) {
                cout << "Second" << el;
            } else {
                cout << "First" << el;
            }
        }
    }
    return 0;
}