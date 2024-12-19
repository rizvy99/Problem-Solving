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
        int n,s,r;
        cin>> n>> s>> r;
        cout<< s - r<< ' ';
        int val = s - r;
        s -= s - r;
        for(int i = 2; i <= n; i++){
            int x = min(val, s - (n - i));
            cout<< x<< ' ';
            s -= x;
        }
        cout<< el;
     
    }
    return 0;
}