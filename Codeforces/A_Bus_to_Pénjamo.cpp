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
        int n, r, happy = 0, single = 0;
        cin >> n >> r;
        vector<int>v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            happy += (v[i] / 2) * 2;   
            single += v[i] % 2;     
            r -= v[i] / 2;            
        }
        if (single > r)
            happy += r * 2 - single;
        else{
            happy += single;
        }
        cout << happy << el;
    }
    return 0;
}
