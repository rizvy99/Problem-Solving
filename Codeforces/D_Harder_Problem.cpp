#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
#define MAX_N 200000;
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        map<int, int> freq;  
        int Freq = 0;
        int current = a[0];

        for (int i = 0; i < n;i++) {
            freq[a[i]]++;
            if (freq[a[i]] >Freq || (freq[a[i]] == Freq && a[i] < current)) {
                Freq = freq[a[i]];
                current = a[i];
            }
            b[i] = current;  
        }

        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << el;
    }
    return 0 ;
}