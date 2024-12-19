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
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        ll total_cost = 0;
        sort(A.begin(),A.end());
        for (int i = 0; i < N; i++) {
            int discounted_price = max(0, A[i] - i);
            total_cost += discounted_price;
        }
        cout << total_cost << el;
    }
     
    
    return 0;
}