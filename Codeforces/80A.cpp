#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    int nextPrime = n + 1;
    while (!isPrime(nextPrime)) {
        nextPrime++;
    }
    if (m == nextPrime) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
