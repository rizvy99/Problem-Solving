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
    int n;
    cin >> n;
    int ar[n];   
    for (int i = 0; i < n; i++) {
      cin >> ar[i];
    }

    int freq[n + 1];  
    memset(freq, 0, sizeof(freq));  
    for (int i = 0; i < n; i++) {
      freq[ar[i]]++;
    }
    int max_freq = 0;
    for (int i = 0; i <= n; i++) {
      if (freq[i] > max_freq) {
        max_freq = freq[i];
      }
    }

    cout << n - max_freq <<el;   
  }
  return 0;
}
