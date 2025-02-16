#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
int max_Build(int n, vector<int>& v) {
    int Building = 1;  
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n;j++) {
            if (v[j] != v[i]) continue;  
            int inter = j - i;  
            int cnt = 2;  
            int next = j + inter;
            while (next < n && v[next] == v[i]) {
                cnt++;
                next += inter;
            }
            Building = max(Building, cnt);
        }
    }
    return Building;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    cout << max_Build(n, v) << el;

    return 0;
}
