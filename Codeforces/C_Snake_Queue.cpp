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
    deque<pair<ll, ll>> queue; 
    long long offset = 0;  
    while (t--) {
        int q;
        cin >> q;
        if (q == 1) {
           ll l;
            cin >> l;
            if (queue.empty()) {
                queue.emplace_back(0, l);  
            } else {
               ll l_head = queue.back().first;
                ll l_length = queue.back().second;
                queue.emplace_back(l_head + l_length, l);  
            }
        } else if (q == 2) {
           ll front = queue.front().second;
            offset += front; 
            queue.pop_front();  
        } else if (q == 3) {
            int k;
            cin >> k;
            cout << queue[k - 1].first - offset << el;  
        }
    }

    return 0;
}
