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
    vector<int> A(5);
    for (int i = 0; i < 5; i++) {
        cin >> A[i];
    }
    vector<int> sortedA = {1, 2, 3, 4, 5};
    for (int i = 0; i < 4; i++) {
        vector<int> temp = A;
        swap(temp[i], temp[i + 1]);
        if (temp == sortedA) {
            cout << "Yes" << el;
            return 0;
        }
    }

    cout << "No" << el;
    return 0;
}
