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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        vector<int> blocks; 
        int cnt = 1;
        for (int i = 1; i < n; ++i) {
            if (v[i] == v[i - 1]) {
                cnt++;
            } else {
                blocks.push_back(cnt);
                cnt = 1;
            }
        }
        blocks.push_back(cnt);  
    
        int max_len = 0;
        for (size_t i = 0; i < blocks.size() - 1; ++i) {
            max_len = max(max_len, 2 * min(blocks[i], blocks[i + 1]));
        }
    
        cout << max_len << endl;
        return 0;
    }
    